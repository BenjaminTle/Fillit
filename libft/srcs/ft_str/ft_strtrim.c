/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 17:20:14 by thplessi          #+#    #+#             */
/*   Updated: 2018/11/17 00:29:16 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function copy the string without the starting and ending blank spaces,
** \n, \v, \r and \t.
** Return:	The new string without blanks spaces.
** 			NULL if there is an error in memory allocation.
*/

char		*ft_strtrim(const char *s)
{
	size_t	end;
	size_t	start;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s) - 1;
	while (ft_isspace(s[start]))
		start++;
	if (start == end)
		return (ft_strnew(0));
	while (ft_isspace(s[end]))
		end--;
	return (ft_strndup(s + start, end - start + 1));
}
