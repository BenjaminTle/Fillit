/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 22:27:40 by thplessi          #+#    #+#             */
/*   Updated: 2018/11/17 00:20:02 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function swap 2 value of the given size.
*/

void		ft_memswap(void *x, void *y, size_t size)
{
	char	*a;
	char	*b;
	char	c;

	a = x;
	b = y;
	while (size--)
	{
		c = *a;
		*a++ = *b;
		*b++ = c;
	}
}
