/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:34:58 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/19 04:45:40 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function allocate a chunk of memory to a string and set all the bytes
** to 0.
** Return:	The allocated string.
** 			NULL if there is an error in memory allocation.
*/

char		*ft_strnew(size_t size)
{
	char	*ret;
	size_t	i;

	ret = (char *)malloc(sizeof(char) * (size + 1));
	if (!ret)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		ret[i] = '\0';
		i++;
	}
	return (ret);
}
