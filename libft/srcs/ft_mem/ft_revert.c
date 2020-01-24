/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 07:04:35 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/19 05:15:54 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function revert the given array
** Return:	The original array.
*/

void		*ft_revert(void *arr, size_t nitems, size_t size)
{
	void	*arr1;
	void	*arr2;

	arr1 = arr;
	arr2 = arr + ((nitems - 1) * size);
	while (arr1 < arr2)
	{
		ft_memswap(arr1, arr2, size);
		arr1 += size;
		arr2 -= size;
	}
	return (arr);
}
