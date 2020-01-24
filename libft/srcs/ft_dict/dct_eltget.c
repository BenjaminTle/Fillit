/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dct_eltget.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 20:42:40 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/14 14:56:32 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_dict.h>

struct s_elt	*dct_eltget(struct s_elt *elt, const char *key)
{
	while (elt)
	{
		if (ft_strequ(elt->key, key))
			return (elt);
		elt = elt->next;
	}
	return (NULL);
}
