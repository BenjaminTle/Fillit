/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 16:56:46 by thplessi          #+#    #+#             */
/*   Updated: 2018/12/03 23:10:25 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GNL_H
# define FT_GNL_H

# include <libft.h>

/*
** Buffer size for GNL:
*/
# define GNL_BUFF	32

/*
** File descriptor used in get next line:
*/
typedef struct		s_fd
{
	char			*buff;
	char			strt[GNL_BUFF + 1];
	int				fd;
	struct s_fd		*next;
}					t_fd;

#endif
