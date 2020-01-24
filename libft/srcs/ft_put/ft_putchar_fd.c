/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 20:00:58 by thplessi          #+#    #+#             */
/*   Updated: 2016/11/05 02:11:59 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function write the given char to the given file descriptor.
** Return:	The written char.
** 			-1 if an error occured.
*/

int		ft_putchar_fd(int c, int fd)
{
	return (write(fd, &c, 1) > 0 ? c : -1);
}
