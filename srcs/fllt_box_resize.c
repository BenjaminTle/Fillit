/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fllt_box_resize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btollie <btollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:14:16 by btollie           #+#    #+#             */
/*   Updated: 2018/12/22 02:20:53 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

t_box					*fllt_box_resize(t_box *box)
{
	int					i;

	box->sz++;
	free(box->str);
	box->str = (char *)malloc(sizeof(char) * box->sz * (box->sz + 1));
	if (!box->str)
		fllt_error_handler(ERR_MALLOC);
	ft_memset(box->str, '.', (box->sz * (box->sz + 1) - 1));
	i = box->sz;
	while (i > 0)
	{
		if (i == box->sz)
			box->str[i * (box->sz + 1) - 1] = '\0';
		else
			box->str[i * (box->sz + 1) - 1] = '\n';
		i--;
	}
	return (box);
}
