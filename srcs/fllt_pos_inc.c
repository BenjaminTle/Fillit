/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fllt_pos_inc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 19:21:46 by thplessi          #+#    #+#             */
/*   Updated: 2018/12/18 18:02:29 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

t_pos			fllt_pos_inc(t_pos pos, int size, char *str)
{
	pos.s.x++;
	if (str[pos.s.x + pos.s.y * size] == '\n')
	{
		pos.s.x = 0;
		pos.s.y++;
	}
	return (pos);
}
