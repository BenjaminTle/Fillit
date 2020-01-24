/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictfree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 19:08:19 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/14 02:59:32 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_dict.h>

/*
** This function clear and free the given dictionary.
*/

static void			ft_eltfreeall(struct s_elt *elt)
{
	struct s_elt	*del;

	while (elt)
	{
		del = elt;
		elt = elt->next;
		free(del->key);
		free(del->value);
		free(del);
	}
}

void				ft_dictfree(t_dict dict)
{
	size_t			i;

	if (!dict)
		return ;
	i = 0;
	while (i < dict->size)
	{
		ft_eltfreeall(dict->table[i]);
		i++;
	}
	free(dict);
	dict = NULL;
}
