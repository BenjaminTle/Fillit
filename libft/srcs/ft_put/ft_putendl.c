/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 19:55:31 by thplessi          #+#    #+#             */
/*   Updated: 2016/11/05 03:16:49 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function write the given string to STDOUT and terminate it by \n.
** Return:	The number of chars written
** 			-1 if an error occured
*/

ssize_t		ft_putendl(const char *s)
{
	ssize_t	ret;

	ret = ft_putstr(s);
	return ((write(1, "\n", 1) > 0 && ret > 0) ? ret + 1 : -1);
}
