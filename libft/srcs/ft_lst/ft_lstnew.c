/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 10:26:58 by thplessi          #+#    #+#             */
/*   Updated: 2018/11/17 00:05:17 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function create a new element and copy the content in it.
** If no content or no size is given the function set the content of the
** element to NULL and the content size to 0.
** Return:	The new element.
** 			NULL if there is an error in memory allocation.
*/

t_list		*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*ret;

	ret = (t_list*)malloc(sizeof(t_list));
	if (!ret)
		return (NULL);
	if (!content)
	{
		ret->content = NULL;
		ret->content_size = 0;
		ret->next = NULL;
	}
	else
	{
		ret->content = (void *)malloc(content_size);
		if (!ret->content)
		{
			free(ret);
			return (NULL);
		}
		ft_memcpy(ret->content, (void *)content, content_size);
		ret->content_size = content_size;
		ret->next = NULL;
	}
	return (ret);
}
