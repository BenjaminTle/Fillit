/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasestr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 00:32:08 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/14 17:45:45 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function search an occurence of the string s2 in the string s1
** case insensitivement
** Return:	A pointer to the first occurence of the string s2
** 			NULL if there is no occurence of s2 in s1
** 			s1 if s2 is empty.
*/

char		*ft_strcasestr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;

	len = ft_strlen(s2);
	if (len == 0)
		return ((char *)s1);
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (ft_caseeq(s1[i + j], s2[j]) && s2[j])
			j++;
		if (j == len)
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}
