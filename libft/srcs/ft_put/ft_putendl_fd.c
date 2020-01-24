/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 20:03:17 by thplessi          #+#    #+#             */
/*   Updated: 2016/11/05 02:11:39 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function write the given string to the given file descriptor and
** terminate it by \n.
** Return:	The number of chars written
** 			-1 if an error occured
*/

ssize_t		ft_putendl_fd(const char *s, int fd)
{
	ssize_t	ret;

	ret = ft_putstr_fd(s, fd);
	return ((write(fd, "\n", 1) > 0 && ret > 0) ? ret + 1 : -1);
}
