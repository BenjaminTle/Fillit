/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 19:59:11 by thplessi          #+#    #+#             */
/*   Updated: 2016/11/05 03:16:41 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function write the given number to STDOUT.
** Return:	The size of the number
** 			-1 if an error occured
*/

static ssize_t	ft_nbr(unsigned int n)
{
	ssize_t		ret;

	if (n / 10 > 0)
		ret = ft_nbr(n / 10);
	return ((ft_putchar(n % 10 + '0') > 0 && ret > 0) ? ret + 1 : -1);
}

ssize_t			ft_putnbr(int n)
{
	ssize_t		ret;

	ret = 0;
	if (n < 0)
	{
		ret = ft_putchar('-') > 0 ? 1 : -1;
		ret *= ft_nbr((unsigned int)-n);
		ret = (ret > 0) ? ret + 1 : -1;
	}
	else
		ret = ft_nbr((unsigned int)n);
	return (ret);
}
