/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictsnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 18:00:02 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/19 17:27:18 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_dict.h>

/*
** This function create a new dictionary of the given size.
** Return:	The newly created dictionary.
*/

t_dict		ft_dictsnew(size_t size)
{
	t_dict	new;

	new = (t_dict)malloc(sizeof(struct s_dict));
	if (!new)
		return (NULL);
	new->size = size;
	new->nelt = 0;
	new->table = (struct s_elt **)malloc(sizeof(struct s_elt *) * size);
	if (!new->table)
	{
		free(new);
		return (NULL);
	}
	ft_bzero(new->table, sizeof(struct s_elt *) * size);
	return (new);
}
