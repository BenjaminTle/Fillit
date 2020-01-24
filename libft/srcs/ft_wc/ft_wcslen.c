/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcslen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 02:58:06 by thplessi          #+#    #+#             */
/*   Updated: 2016/09/07 09:11:08 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** man 3 wcslen
*/

size_t		ft_wcslen(const wchar_t *wcs)
{
	size_t	size;

	size = 0;
	while (*(wcs++))
		size++;
	return (size);
}
