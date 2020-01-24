/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dct_hash.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 18:27:48 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/13 22:49:51 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_dict.h>

unsigned long			dct_hash(const char *str)
{
	unsigned const char	*ustr;
	unsigned long		hash;

	hash = 0;
	ustr = (unsigned const char *)str;
	while (*ustr)
	{
		hash = hash * DCT_HMULT + *ustr;
		ustr++;
	}
	return (hash);
}
