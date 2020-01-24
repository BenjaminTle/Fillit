/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fllt_find_next_tm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 21:37:14 by thplessi          #+#    #+#             */
/*   Updated: 2018/12/20 13:40:31 by btollie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

int					fllt_find_next_tm(t_tm tm[], int i_tm)
{
	while (tm[i_tm].s.shape)
	{
		if (!tm[i_tm].s.placed)
			return (i_tm);
		i_tm++;
	}
	return (N_FAILURE);
}
