/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 22:27:54 by thplessi          #+#    #+#             */
/*   Updated: 2018/11/28 22:53:44 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Get the minimum between two values.
** Return:	The minimum.
*/

int		ft_min(int a, int b)
{
	return ((a < b) ? a : b);
}
