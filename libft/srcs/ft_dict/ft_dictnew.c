/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dictnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 17:55:21 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/14 14:53:02 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_dict.h>

/*
** This function create a new dictionary.
** Return:	The newly created dictionary.
*/

t_dict	ft_dictnew(void)
{
	return (ft_dictsnew(DCT_ISZE));
}
