/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 01:32:37 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/14 14:59:01 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_dict.h>

/*
** This function copy the dictionary src in dst.
** Return:	-1 on error.
**			0 on growth error.
**			1 on success.
*/

int					ft_dictcpy(t_dict dst, t_dict src)
{
	size_t			i;
	struct s_elt	*elt;
	int				ret;

	if (!dst || !src)
		return (-1);
	ret = 1;
	i = 0;
	while (i < src->size)
	{
		elt = src->table[i];
		while (elt)
		{
			ret = ft_dictset(dst, elt->key, elt->value);
			if (ret == -1)
				return (-1);
			elt = elt->next;
		}
		i++;
	}
	return (ret);
}
