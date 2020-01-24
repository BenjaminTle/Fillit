/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dicthas.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 20:37:47 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/14 14:52:22 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_dict.h>

/*
** This function check if the given key is available in the given dictionary.
** Return:	1 if the key is available.
**			0 if not.
*/

int		ft_dicthas(t_dict dict, const char *key)
{
	if (!dict | !key)
		return (0);
	return (dct_eltget(dict->table[dct_hash(key) % dict->size], key) != NULL);
}
