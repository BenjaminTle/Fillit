/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictresize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 02:06:20 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/14 14:56:37 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_dict.h>

/*
** This function resize the given dictionary to the given size.
** Return:	NULL if there is an error.
**			The resized dictionary if not.
*/

t_dict				ft_dictresize(t_dict dict, size_t size)
{
	t_dict			tmp;

	tmp = ft_dictsnew(size);
	if (!tmp)
		return (NULL);
	ft_dictrehash(tmp, dict);
	free(dict->table);
	dict->size = tmp->size;
	dict->table = tmp->table;
	free(tmp);
	return (dict);
}
