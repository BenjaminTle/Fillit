/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fllt_readfile.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 18:06:34 by thplessi          #+#    #+#             */
/*   Updated: 2018/12/13 22:33:34 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fillit.h>

static int			fllt_is_ln_valid(char *str, char *prev_bin,
						unsigned char *cnt)
{
	unsigned char	i;
	unsigned char	bin;

	i = 0;
	while (*(str + i) == '.')
		i++;
	bin = 0;
	while (*(str + i) == '#')
	{
		bin += 1 << (3 - i);
		(*cnt)++;
		i++;
	}
	while (*(str + i) == '.')
		i++;
	if (*(str + i) != '\n' || i != 4 ||
			(*cnt < 4 && *prev_bin && !(bin & *prev_bin)))
		return (0);
	*prev_bin = bin;
	return (1);
}

int					fllt_read_tetromino(int fd, t_tm *tm)
{
	char			str[20];
	char			bin;
	unsigned char	cnt;
	unsigned int	i;

	if (read(fd, str, 20) != 20)
		fllt_error_handler(ERR_READ);
	bin = 0;
	cnt = 0;
	i = 0;
	while (i < 4)
	{
		if (!fllt_is_ln_valid(str + (i++) * 5, &bin, &cnt))
			fllt_error_handler(ERR_LINE_INVALID);
	}
	if (cnt != 4)
		fllt_error_handler(ERR_COUNT_SHARP);
	tm->s.shape = fllt_detect_shape(str, tm);
	if (!read(fd, str, 1))
		return (0);
	return (1);
}

int					fllt_readfile(char *file, t_tm *tm)
{
	int				valid;
	int				fd;
	int				i;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		fllt_error_handler(ERR_OPEN);
	i = 0;
	while (i <= 26)
	{
		if (i >= 26)
			fllt_error_handler(ERR_COUNT_TM_MAX);
		tm[i].s.order = i;
		valid = fllt_read_tetromino(fd, tm + i);
		if (valid == 0)
			break ;
		i++;
	}
	i++;
	tm[i] = (t_tm)(unsigned short)0;
	return (i);
}
