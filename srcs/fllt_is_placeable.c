/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fllt_is_placeable.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 17:18:32 by thplessi          #+#    #+#             */
/*   Updated: 2018/12/22 17:25:06 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

extern char		g_tm_strs[N_TM][N_ROT][TM_LEN];

static int		fllt_test_place(t_box *box, char *tm_str, t_pos pos, int i)
{
	int			x_init;
	int			n_sharps;

	x_init = pos.s.x - i;
	n_sharps = 0;
	while (pos.s.x + pos.s.y * (box->sz + 1) < box->sz * (box->sz + 1)
		&& i < 20 && n_sharps < 4)
	{
		if (box->str[pos.s.x + pos.s.y * (box->sz + 1)] == '.'
			&& tm_str[i] == '#')
		{
			n_sharps++;
			pos.s.x++;
			i = fllt_find_next_sharp(tm_str, x_init, &pos, i + 1);
		}
		else
			return (FAILURE);
	}
	if (n_sharps != 4)
		return (FAILURE);
	return (SUCCESS);
}

int				fllt_is_placeable(t_box *box, t_pos pos, t_tm tm)
{
	int			offset;
	char		*tm_str;

	tm_str = g_tm_strs[tm.s.shape - 1][tm.s.rot + 1];
	if (!tm_str)
		return (fllt_error_handler(ERR_TM));
	offset = 0;
	while (tm_str[offset] != '#' && tm_str[offset])
		offset++;
	while (offset >= 0)
	{
		if (fllt_test_place(box, tm_str, pos, offset))
			return (offset);
		offset--;
	}
	return (N_FAILURE);
}
