/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bitlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 06:57:16 by thplessi          #+#    #+#             */
/*   Updated: 2016/11/05 01:39:42 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function count the lenght in bits of the number nb.
** Return:	The bit length of nb.
*/

size_t		ft_bitlen(unsigned long long nb)
{
	size_t	size;

	size = 0;
	while (nb)
	{
		nb >>= 1;
		size++;
	}
	return (size);
}
