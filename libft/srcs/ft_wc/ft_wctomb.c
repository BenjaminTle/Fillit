/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wctomb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/03 22:47:17 by thplessi          #+#    #+#             */
/*   Updated: 2016/11/05 14:08:43 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** man 3 wctomb
*/

int			ft_wctomb(char *s, wchar_t wchar)
{
	int		i;
	int		len;

	len = ft_wclen(wchar);
	if (s == NULL || len == 255)
		return (s == NULL ? 0 : 255);
	i = 1;
	while (i < len)
	{
		s[len - i] = (char)((wchar & 63) | FT_WC_BIS);
		wchar >>= 6;
		i++;
	}
	s[0] = (char)(wchar | (unsigned char)FT_WC_MASK[len - 1]);
	return (len);
}
