/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnrepl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 17:52:57 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/19 11:31:37 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function replace each occurence of the char repl by the char sub in
** the given length.
*/

void		ft_strnrepl(char *str, char repl, char sub, size_t len)
{
	size_t	i;

	i = 0;
	while (str[i] && i < len)
	{
		if (str[i] == repl)
			str[i] = sub;
		i++;
	}
}
