/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:43:15 by thplessi          #+#    #+#             */
/*   Updated: 2018/11/16 23:24:34 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** man 3 isprint
*/

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}