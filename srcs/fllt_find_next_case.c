/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fllt_find_next_case.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btollie <btollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 14:32:28 by btollie           #+#    #+#             */
/*   Updated: 2018/12/22 00:27:38 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

t_pos				fllt_find_next_case(t_box *box, t_pos pos)
{
	int				i;
	t_pos			ret;

	ret.s.x = N_FAILURE;
	ret.s.y = N_FAILURE;
	i = pos.s.x + pos.s.y * (box->sz + 1) + 1;
	while (box->str[i] != '.' && box->str[i])
		i++;
	if (!box->str[i])
		return (ret);
	ret.s.x = i % (box->sz + 1);
	ret.s.y = i / (box->sz + 1);
	return (ret);
}
