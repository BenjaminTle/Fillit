/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictvalues.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 02:11:56 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/14 14:55:32 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_dict.h>

/*
** This function list all values of the given dictionary.
** Return:	NULL if there is an error.
**			An array of values otherwise.
*/

char				**ft_dictvalues(t_dict dict)
{
	char			**values;
	size_t			i;
	size_t			j;
	struct s_elt	*elt;

	values = (char **)malloc(sizeof(char *) * dict->nelt);
	if (!values)
		return (NULL);
	i = 0;
	j = 0;
	while (i < dict->size)
	{
		elt = dict->table[i];
		while (elt)
		{
			values[j] = elt->value;
			j++;
			elt = elt->next;
		}
	}
	return (values);
}
