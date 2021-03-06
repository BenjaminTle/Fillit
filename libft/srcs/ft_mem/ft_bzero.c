/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 18:02:32 by thplessi          #+#    #+#             */
/*   Updated: 2016/11/05 01:42:52 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** man 3 bzero
*/

void	*ft_bzero(void *s, size_t n)
{
	ft_memset((unsigned char*)s, 0, n);
	return (s);
}
