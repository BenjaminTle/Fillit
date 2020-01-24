/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 22:28:55 by thplessi          #+#    #+#             */
/*   Updated: 2018/11/28 22:48:58 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Get the absolute value of a number.
** Return:	The absolute value.
*/

int		ft_abs(int n)
{
	return ((n < 0) ? -n : n);
}
