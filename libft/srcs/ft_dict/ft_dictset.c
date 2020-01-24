/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 18:43:58 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/14 14:52:03 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_dict.h>

/*
** This function set a new key/value pair in the dictionary or edit the value of
** the given key if this key already exist.
** Return:	-1 on errors.
** 			0 on growth errors.
**			1 on success.
*/

static struct s_elt	*ft_newelt(t_dict dict, char *key, unsigned long hash)
{
	struct s_elt	*new;

	new = (struct s_elt *)malloc(sizeof(struct s_elt));
	if (new == NULL)
		return (NULL);
	new->key = ft_strdup(key);
	new->next = dict->table[hash];
	dict->table[hash] = new;
	dict->nelt++;
	return (new);
}

int					ft_dictset(t_dict dict, char *key, char *value)
{
	struct s_elt	*new;
	unsigned long	hash;

	if (!key || !value)
		return (-1);
	hash = dct_hash(key) % dict->size;
	new = dct_eltget(dict->table[hash], key);
	if (!new)
	{
		new = ft_newelt(dict, key, hash);
		if (new == NULL)
			return (-1);
	}
	else
		free(new->value);
	new->value = ft_strdup(value);
	if (dict->nelt >= dict->size * DCT_MAXLOAD)
	{
		if (ft_dictresize(dict, dict->size * DCT_GFACT) == NULL)
			return (0);
	}
	return (1);
}
