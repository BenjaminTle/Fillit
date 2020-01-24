/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fllt_detect_shape.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 05:46:56 by thplessi          #+#    #+#             */
/*   Updated: 2018/12/14 15:37:03 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

extern char				g_tm_strs[N_TM][N_ROT][TM_LEN];

static int				fllt_test_tm(char *str, char *tm)
{
	int					i;
	int					j;
	int					n_sharp;

	n_sharp = 0;
	i = 0;
	j = 0;
	while (n_sharp < 4 && tm[i] && str[j])
	{
		if (tm[i] == str[j] && str[j] == '#')
			n_sharp++;
		if (tm[i] == str[j])
		{
			i++;
			j++;
		}
		else if (tm[i] == '\n')
			i++;
		else if (str[j] == '\n')
			j++;
		else
			break ;
	}
	return (n_sharp);
}

unsigned char			fllt_detect_shape(char *str, t_tm *tm)
{
	int					i;
	int					j;
	int					k;

	while (*str != '#')
		str++;
	i = 0;
	while (i < N_TM)
	{
		j = 1;
		while (j <= (int)g_tm_strs[i][0][0])
		{
			k = 0;
			while (g_tm_strs[i][j][k] != '#')
				k++;
			if (fllt_test_tm(str, g_tm_strs[i][j] + k) == 4)
			{
				tm->s.rot = (unsigned char)(j - 1);
				return ((unsigned char)(i + 1));
			}
			j++;
		}
		i++;
	}
	return (fllt_error_handler(ERR_SHAPE));
}
