/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 18:17:40 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/19 06:12:36 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** memset with ints values.
*/

void				*ft_memset_int(void *b, int c, size_t len)
{
	size_t			i;

	i = 0;
	while (i < len)
	{
		((int *)b)[i] = c;
		i++;
	}
	return (b);
}
