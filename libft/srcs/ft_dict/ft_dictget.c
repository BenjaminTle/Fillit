/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictget.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 19:26:20 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/14 14:52:11 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_dict.h>

/*
** This function get the value of the given key in the given dictionary.
** Return:	NULL if the key is not set.
**			The value of the key otherwise.
*/

char				*ft_dictget(t_dict dict, const char *key)
{
	struct s_elt	*elt;

	if (!key)
		return (NULL);
	elt = dct_eltget(dict->table[dct_hash(key) % dict->size], key);
	if (!elt)
		return (NULL);
	return (elt->value);
}
