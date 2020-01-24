/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wclen.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 15:52:25 by thplessi          #+#    #+#             */
/*   Updated: 2016/11/05 14:08:22 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function calculate the len of the unicode representation of the given
** wide char.
** return:	The len of the unicode representation.
** 			-1 if the wide char is not recognized.
*/

int		ft_wclen(wchar_t wc)
{
	if (wc <= 0x10FFFF && wc >= 0x10000)
		return (4);
	else if (wc < 0x10000 && wc >= 0x800 && (wc > 0xDFFF || wc <= 0xD800))
		return (3);
	else if (wc < 0x800 && wc >= 0x80)
		return (2);
	else if (wc < 0x80 && wc >= 0x0)
		return (1);
	return (-1);
}
