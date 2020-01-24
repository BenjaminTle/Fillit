/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 10:44:13 by thplessi          #+#    #+#             */
/*   Updated: 2016/11/05 01:41:05 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** atoi with a radix.
*/

unsigned int		ft_atoi_base(const char *str, unsigned int base)
{
	unsigned int	nb;
	unsigned int	ret;

	ret = 0;
	if (base <= 1 || base > 16)
		return (0);
	while (ft_isspace(*str))
		str++;
	while (*str && ft_isxdigit(*str))
	{
		if (ft_islower(*str))
			nb = *str - 'a' + 10;
		else if (ft_isupper(*str))
			nb = *str - 'A' + 10;
		else
			nb = *str - '0';
		if (nb >= base)
			return (0);
		ret = ret * base + nb;
		str++;
	}
	return (ret);
}
