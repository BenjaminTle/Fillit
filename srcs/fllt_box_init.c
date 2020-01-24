/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fllt_box_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 19:30:21 by thplessi          #+#    #+#             */
/*   Updated: 2018/12/22 00:12:17 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

static void				fllt_fill_box(char *str, unsigned int size)
{
	unsigned int		i;

	ft_memset(str, '.', (size * (size + 1) - 1));
	i = size;
	while (i)
	{
		if (i == size)
			str[i * (size + 1) - 1] = '\0';
		else
			str[i * (size + 1) - 1] = '\n';
		i--;
	}
}

t_box					*fllt_box_init(int nb_tm)
{
	unsigned int		size;
	char				*str;
	t_box				*box;

	if (nb_tm < 1)
		fllt_error_handler(ERR_COUNT_TM_MIN);
	nb_tm *= 4;
	size = 0;
	while (((short *)FLLT_SQ)[size] < nb_tm)
		size++;
	if (!(str = (char *)malloc(sizeof(char) * (size * (size + 1)))))
		fllt_error_handler(ERR_MALLOC);
	fllt_fill_box(str, size);
	if (!(box = (t_box *)malloc(sizeof(t_box))))
		fllt_error_handler(ERR_MALLOC);
	box->sz = size;
	box->str = str;
	return (box);
}
