/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictinsert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 02:22:55 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/19 16:03:15 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_dict.h>

/*
** This function insert a ptr on arrays of keys/values pairs of the given size
** in the given dictionary.
** Return:	The number of inserted key/value pairs.
*/

size_t		ft_dictinsert(t_dict dict, char ***arr, size_t size)
{
	size_t	i;
	size_t	j;

	if (!dict || !arr)
		return (0);
	i = 0;
	j = 0;
	while (i < size)
	{
		if (ft_dictset(dict, arr[i][0], arr[i][1]) >= 0)
			j++;
		i++;
	}
	return (j);
}
