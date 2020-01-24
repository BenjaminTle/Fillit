/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 19:41:08 by thplessi          #+#    #+#             */
/*   Updated: 2016/11/05 03:16:27 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function write the given string to STDOUT.
** Return:	The number of chars written
** 			-1 if an error occured
*/

ssize_t		ft_putstr(const char *s)
{
	size_t	len;

	len = ft_strlen(s);
	return (write(1, s, len));
}
