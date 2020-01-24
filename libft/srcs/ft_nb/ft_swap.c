/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 07:16:40 by thplessi          #+#    #+#             */
/*   Updated: 2016/11/07 07:18:11 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_swap(char *a, char *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}