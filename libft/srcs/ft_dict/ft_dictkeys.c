/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictkeys.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 02:11:56 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/14 14:56:34 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_dict.h>

/*
** This function list all keys of the given dictionary.
** Return:	NULL if there is an error.
**			An array of keys otherwise.
*/

char				**ft_dictkeys(t_dict dict)
{
	char			**keys;
	size_t			i;
	size_t			j;
	struct s_elt	*elt;

	keys = (char **)malloc(sizeof(char *) * dict->nelt);
	if (!keys)
		return (NULL);
	i = 0;
	j = 0;
	while (i < dict->size)
	{
		elt = dict->table[i];
		while (elt)
		{
			keys[j] = elt->key;
			j++;
			elt = elt->next;
		}
	}
	return (keys);
}
