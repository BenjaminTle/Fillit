/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 23:35:31 by thplessi          #+#    #+#             */
/*   Updated: 2018/11/17 01:17:07 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

wint_t		ft_putwchar(wchar_t wc)
{
	int		len;
	char	c[4];

	len = ft_wctomb(c, wc);
	write(1, c, len);
	return (wc);
}
