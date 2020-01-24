/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fllt_find_next_sharp.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/22 01:18:42 by thplessi          #+#    #+#             */
/*   Updated: 2018/12/22 01:25:53 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

int			fllt_find_next_sharp(char *tm_str, int x_init, t_pos *pos, int i)
{
	while (tm_str[i] != '#' && tm_str[i])
	{
		i++;
		pos->s.x++;
		if (tm_str[i] == '\n')
		{
			pos->s.y++;
			pos->s.x = x_init;
			i++;
		}
	}
	return (i);
}
