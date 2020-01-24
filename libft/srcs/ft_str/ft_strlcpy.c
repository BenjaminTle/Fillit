/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 22:58:02 by thplessi          #+#    #+#             */
/*   Updated: 2018/12/06 10:11:03 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** man 3 strlcpy
*/

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size && size - 1)
	{
		while (i < size - 1)
		{
			dst[i] = src[i];
			if (!src[i])
				break ;
			i++;
		}
	}
	if (i == size - 1)
		dst[i] = 0;
	return (ft_strlen(src));
}
