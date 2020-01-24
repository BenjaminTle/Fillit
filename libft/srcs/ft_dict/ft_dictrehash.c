/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictrehash.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 02:07:53 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/14 14:59:53 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_dict.h>

/*
** This function rehash all the key/value pair of the given src dictionary in
** the dst dictionary
** Return:	NULL on error.
**			dst otherwise.
*/

t_dict				ft_dictrehash(t_dict dst, t_dict src)
{
	size_t			i;
	struct s_elt	*elt;
	unsigned long	hash;

	if (!dst || !src)
		return (NULL);
	i = 0;
	while (i < src->size)
	{
		elt = src->table[i];
		while (elt)
		{
			hash = dct_hash(elt->key) % dst->size;
			src->table[i] = elt->next;
			elt->next = dst->table[hash];
			dst->table[hash] = elt;
			elt = src->table[i];
		}
		i++;
	}
	return (dst);
}
