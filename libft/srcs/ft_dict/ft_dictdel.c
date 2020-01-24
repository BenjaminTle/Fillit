/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 18:29:07 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/14 02:59:37 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_dict.h>

/*
** This function delete a key/value pair in the given dictionary.
*/

void				ft_dictdel(t_dict dict, const char *key)
{
	struct s_elt	**prev;
	struct s_elt	*del;

	if (!key)
		return ;
	prev = &(dict->table[dct_hash(key) % dict->size]);
	while (*prev)
	{
		if (ft_strequ((*prev)->key, key))
		{
			del = *prev;
			*prev = del->next;
			free(del->key);
			free(del->value);
			free(del);
			return ;
		}
		prev = &((*prev)->next);
	}
}
