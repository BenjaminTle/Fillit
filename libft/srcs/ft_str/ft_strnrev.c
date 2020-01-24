/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnrev.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 00:08:33 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/19 04:46:19 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function revert the given substring (delimited by begin and end) of the
** given string.
** Return:	The original string with the substring reverted.
*/

char		*ft_strnrev(char *s, size_t begin, size_t end)
{
	char	*s1;
	char	*s2;

	if (!s || !*s)
		return (s);
	s1 = s + begin;
	s2 = s + end - 1;
	while (s1 < s2)
	{
		ft_swap(s1, s2);
		s1++;
		s2--;
	}
	return (s);
}
