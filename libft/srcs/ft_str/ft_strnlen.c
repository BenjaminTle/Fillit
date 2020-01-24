/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 20:34:02 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/19 04:46:04 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** man 3 strnlen
*/

size_t		ft_strnlen(const char *s, size_t maxlen)
{
	size_t	ret;

	ret = 0;
	while (s[ret] && ret < maxlen)
		ret++;
	return (ret);
}
