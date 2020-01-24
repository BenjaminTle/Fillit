/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 22:26:39 by thplessi          #+#    #+#             */
/*   Updated: 2018/11/28 22:52:39 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Get the maximum between two values.
** Return:	The maximum.
*/

int		ft_max(int a, int b)
{
	return ((a > b) ? a : b);
}
