/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 14:57:37 by thplessi          #+#    #+#             */
/*   Updated: 2018/11/17 00:04:30 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function add an element to the start of the given linked list.
*/

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (!alst || !*alst || !new)
		return ;
	new->next = *alst;
	*alst = new;
}
