/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fllt_resolve.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 19:17:24 by thplessi          #+#    #+#             */
/*   Updated: 2018/12/22 02:25:05 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

int			fllt_resolve(t_box *box, t_tm tm[], t_pos pos, int i_tm)
{
	t_pos	ze_pos;
	int		offset;

	if (i_tm < 0)
		return (SUCCESS);
	if (pos.s.x < 0 || pos.s.y < 0)
		return (FAILURE);
	offset = fllt_is_placeable(box, pos, tm[i_tm]);
	if (offset < 0)
		return (fllt_resolve(box, tm, fllt_find_next_case(box, pos), i_tm));
	fllt_place(box, pos, tm[i_tm], offset);
	ze_pos.init = 0;
	if (!fllt_resolve(box, tm, ze_pos, fllt_find_next_tm(tm, i_tm + 1)))
	{
		fllt_rm_tm(box, tm[i_tm]);
		return (fllt_resolve(box, tm, fllt_find_next_case(box, pos), i_tm));
	}
	return (SUCCESS);
}
