/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_caseeq.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/16 08:41:00 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/13 17:39:15 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function make a case insensitive comparison of 2 chars
** Return:	1 if it is the same char.
**			0 if it is not.
*/

int	ft_caseeq(char c1, char c2)
{
	if (((c1 <= 90 && c1 >= 65) && (c1 + 32 == c2)) ||
	((c2 <= 90 && c2 >= 65) && (c2 + 32 == c1)) || c1 == c2)
		return (1);
	return (0);
}
