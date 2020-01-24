/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 18:03:36 by thplessi          #+#    #+#             */
/*   Updated: 2018/11/16 23:20:37 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function convert an int value to a string reprtesenting this value in
** the given base.
** Return:	A allocated string containing the ascii representation of the nb.
** 			NULL if there is an error in memory allocation.
*/

static int	ft_ilen_base(unsigned int x, unsigned int base)
{
	int		ret;

	ret = 0;
	if (base < 2 || base > 16)
		return (0);
	if (x == 0)
		return (1);
	while (x != 0)
	{
		x /= base;
		ret++;
	}
	return (ret);
}

static void	ft_tostr(unsigned int n, char *str, unsigned int base)
{
	*str = FT_XDIGIT[n % base];
	if (n / base != 0)
		ft_tostr(n / base, str - 1, base);
}

char		*ft_itoa_base(unsigned int n, unsigned int base)
{
	char	*ret;
	size_t	len;

	len = ft_ilen_base(n, base);
	if (len == 0)
		return (NULL);
	ret = (char*)malloc(len + 1);
	if (ret == NULL)
		return (NULL);
	ft_tostr(n, ret + (len - 1), base);
	*(ret + len) = 0;
	return (ret);
}
