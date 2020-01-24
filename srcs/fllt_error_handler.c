/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fllt_error_handler.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 22:40:16 by thplessi          #+#    #+#             */
/*   Updated: 2018/12/13 19:47:33 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

int			fllt_error_handler(int err)
{
	if (err == ERR_ARGS)
		ft_putstr(FLLT_USAGE_MSG);
	else
		ft_putstr(FLLT_ERROR_MSG);
	exit(-err);
	return (err);
}
