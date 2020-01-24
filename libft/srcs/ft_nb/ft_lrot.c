/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lrot.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 22:30:48 by thplessi          #+#    #+#             */
/*   Updated: 2018/12/03 23:12:52 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Left rotate a number.
** Return:	The value left rotated.
*/

int		ft_lrot(int n)
{
	return ((n << 1U) | (n >> (sizeof(n) * 8 - 1)));
}
