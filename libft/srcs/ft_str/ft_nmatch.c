/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nmatch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/06 23:06:26 by thplessi          #+#    #+#             */
/*   Updated: 2016/11/05 02:00:22 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function how many time the string pattern s2 is a part of the string s1
** Return:	how many time the pattern is a part of the string.
*/

int			ft_nmatch(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 == '*')
		return (ft_nmatch(s1 + 1, s2) + ft_nmatch(s1, s2 + 1));
	else if (*s1 == '\0' && *s2 == '*')
		return (ft_nmatch(s1, s2 + 1));
	else if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		return (ft_nmatch(s1 + 1, s2 + 1));
	else if (*s1 == *s2 && *s1 == '\0' && *s2 == '\0')
		return (1);
	return (0);
}
