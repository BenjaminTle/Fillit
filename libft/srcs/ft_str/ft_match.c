/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_match.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/06 23:06:32 by thplessi          #+#    #+#             */
/*   Updated: 2016/11/05 01:53:30 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function check if the string pattern s2 is a part of the string s1
** Return:	1 if the pattern is a part of the string.
** 			0 if not.
*/

int			ft_match(char *s1, char *s2)
{
	if (*s1 != '\0' && *s2 == '*')
		return (ft_match(s1 + 1, s2) || ft_match(s1, s2 + 1));
	else if (*s1 == '\0' && *s2 == '*')
		return (ft_match(s1, s2 + 1));
	else if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		return (ft_match(s1 + 1, s2 + 1));
	else if (*s1 == *s2 && *s1 == '\0' && *s2 == '\0')
		return (1);
	return (0);
}
