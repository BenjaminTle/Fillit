/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrot.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 22:30:02 by thplessi          #+#    #+#             */
/*   Updated: 2018/12/03 23:12:43 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Right rotate a number.
** Return:	The value right rotated.
*/

int		ft_rrot(int n)
{
	return ((n >> 1U) | (n << (sizeof(n) * 8 - 1)));
}
