/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 20:05:29 by thplessi          #+#    #+#             */
/*   Updated: 2016/11/05 03:16:45 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function write the given number to the given file descriptor.
** Return:	The size of the number
** 			-1 if an error occured
*/

static ssize_t	ft_nbr_fd(unsigned int n, int fd)
{
	ssize_t		ret;

	if (n / 10 > 0)
		ret = ft_nbr_fd(n / 10, fd);
	return ((ft_putchar_fd(n % 10 + '0', fd) > 0 && ret > 0) ? ret + 1 : -1);
}

ssize_t			ft_putnbr_fd(int n, int fd)
{
	ssize_t		ret;

	ret = 0;
	if (n < 0)
	{
		ret = ft_putchar_fd('-', fd) > 0 ? 1 : -1;
		ret *= ft_nbr_fd((unsigned int)-n, fd);
		ret = (ret > 0) ? ret + 1 : -1;
	}
	else
		ret = ft_nbr_fd((unsigned int)n, fd);
	return (ret);
}
