/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/19 05:43:55 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/14 17:42:01 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function concatenate an array of strings in a new alloced string.
** Return:	The result of the concatenatoion.
** 			NULL if there is an error in allocation.
*/

char		*ft_arrjoin(char **arr, size_t size)
{
	char	*ret;
	size_t	len;
	size_t	i;

	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen(arr[i++]);
	ret = (char*)malloc((sizeof(char) + 1) * len);
	if (ret == NULL)
		return (NULL);
	i = 0;
	len = 0;
	while (i < size)
	{
		ft_strcpy(ret + len, arr[i]);
		len += ft_strlen(arr[i++]);
	}
	return (ret);
}
