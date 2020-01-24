/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 02:46:28 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/19 04:51:07 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function revert the given string.
** Return:	The original string reverted.
*/

char	*ft_strrev(char *s)
{
	return (ft_strnrev(s, 0, ft_strlen(s)));
}
