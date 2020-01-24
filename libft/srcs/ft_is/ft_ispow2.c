/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispow2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 18:57:43 by thplessi          #+#    #+#             */
/*   Updated: 2016/09/22 20:13:56 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function check if the given number is a power of 2
** Return:	1 if the number is a power of 2.
**			0 if it is not.
*/

int	ft_ispow2(int n)
{
	return ((n & (n - 1)) == 0);
}
