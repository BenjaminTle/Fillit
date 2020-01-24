/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 15:19:55 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/14 01:26:21 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICT_H
# define FT_DICT_H

# include <libft.h>

# define DCT_ISZE		1024
# define DCT_GFACT		2
# define DCT_MAXLOAD	1
# define DCT_HMULT		43

/*
** Dictionary utils:
*/
unsigned long			dct_hash(const char *key);

struct s_elt			*dct_eltget(struct s_elt *elt, const char *key);

#endif
