/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrepl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 17:52:57 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/19 11:29:03 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function replace each occurence of the char repl by the char sub.
*/

void		ft_strrepl(char *str, char repl, char sub)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == repl)
			str[i] = sub;
		i++;
	}
}
