/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fllt_place.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 17:18:32 by thplessi          #+#    #+#             */
/*   Updated: 2018/12/22 17:24:52 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

extern char		g_tm_strs[N_TM][N_ROT][TM_LEN];

int				fllt_place(t_box *box, t_pos pos, t_tm tm, int offset)
{
	int			x_init;
	int			n_sharps;
	char		*tm_str;

	tm_str = g_tm_strs[tm.s.shape - 1][tm.s.rot + 1];
	if (!tm_str)
		return (fllt_error_handler(ERR_TM));
	x_init = pos.s.x - offset;
	n_sharps = 0;
	while (pos.s.x + pos.s.y * (box->sz + 1) < box->sz * (box->sz + 1)
		&& offset < 20 && n_sharps < 4)
	{
		if (box->str[pos.s.x + pos.s.y * (box->sz + 1)] == '.'
			&& tm_str[offset] == '#')
		{
			box->str[pos.s.x + pos.s.y * (box->sz + 1)] = tm.s.order + 'A';
			n_sharps++;
			pos.s.x++;
			offset = fllt_find_next_sharp(tm_str, x_init, &pos, offset + 1);
		}
		else
			return (FAILURE);
	}
	return (SUCCESS);
}
