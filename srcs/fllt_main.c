/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fllt_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 19:34:53 by thplessi          #+#    #+#             */
/*   Updated: 2018/12/22 17:27:47 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <g_fillit.h>

int				main(int ac, char **av)
{
	t_tm		tm[27];
	t_box		*box;
	t_pos		pos;
	int			n_tetros;

	if (ac != 2)
		fllt_error_handler(ERR_ARGS);
	n_tetros = fllt_readfile(av[1], tm);
	box = fllt_box_init(n_tetros);
	pos.init = 0;
	while (!fllt_resolve(box, tm, pos, 0))
		fllt_box_resize(box);
	ft_putendl(box->str);
	free(box->str);
	free(box);
	return (0);
}
