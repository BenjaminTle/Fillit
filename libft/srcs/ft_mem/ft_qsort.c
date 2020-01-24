/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 03:06:00 by thplessi          #+#    #+#             */
/*   Updated: 2018/12/04 00:34:46 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** man 3 qsort
*/

static int		ft_partition(t_list *arr,
	int (*compar)(const void*, const void*), int begin, int end)
{
	void		*pivot;
	int			i;
	int			j;

	pivot = arr->content + end;
	i = begin;
	j = begin;
	while (j < end)
	{
		if (compar(arr->content + j, pivot) <= 0)
		{
			ft_memswap(arr->content + i, arr->content + j,
				arr->content_size);
			i += arr->content_size;
		}
		j += arr->content_size;
	}
	ft_memswap(arr->content + i, arr->content + end,
		arr->content_size);
	return (i);
}

static void		ft_sort(t_list *arr, int (*compar)(const void*, const void*),
	int begin, int end)
{
	int			p;

	if (begin < end)
	{
		p = ft_partition(arr, compar, begin, end);
		ft_sort(arr, compar, begin, p - arr->content_size);
		ft_sort(arr, compar, p + arr->content_size, end);
	}
}

void			ft_qsort(void *base, size_t nel, size_t width,
	int (*compar)(const void *, const void *))
{
	t_list		arr;

	if (nel == 0)
		return ;
	arr.content = base;
	arr.content_size = width;
	ft_sort(&arr, compar, 0, (nel - 1) * width);
}
