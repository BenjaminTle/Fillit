/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btollie <btollie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:24:33 by btollie           #+#    #+#             */
/*   Updated: 2018/12/22 17:24:44 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <libft.h>
# include <fcntl.h>

/*
** Squares from 0 to 23:
*/
# define FLLT_SQ1		"\x00\x00\x01\x00\x04\x00\x09\x00\x10\x00\x19\x00"
# define FLLT_SQ2		"\x24\x00\x31\x00\x40\x00\x51\x00\x64\x00\x79\x00"
# define FLLT_SQ3		"\x90\x00\xA9\x00\xC4\x00\xE1\x00\x00\x01\x21\x01"
# define FLLT_SQ4		"\x44\x01\x61\x01\x90\x01\xB9\x01\xE4\x01\x11\x02"
# define FLLT_SQ		FLLT_SQ1 FLLT_SQ2 FLLT_SQ3 FLLT_SQ4

/*
** Usage and error string:
*/
# define FLLT_ERROR_MSG	"error\n"
# define FLLT_USAGE_MSG	"usage: fillit tetrominos_file\n"

/*
** Array size:
*/
# define N_TM			7
# define N_ROT			5
# define TM_LEN			21

/*
** Letters corresponding to shapes:
*/
# define FLLT_LETTERS	"\0IJLOSTZ"

/*
** Struct of unsigned chars:
**
** Shape:
** none -> 0
** I -> 1
** J -> 2
** L -> 3
** O -> 4
** S -> 5
** T -> 6
** Z -> 7
*/
typedef union			u_tm
{
	unsigned short		init;
	struct
	{
		unsigned char	shape:3;
		unsigned char	rot:2;
		unsigned char	order:5;
		unsigned char	placed:1;
	}					s;
}						t_tm;

/*
** Struct to store a position:
*/
typedef union			u_pos
{
	unsigned short		init;
	struct
	{
		char			x;
		char			y;
	}					s;
}						t_pos;

/*
** Struct to store a box:
*/
typedef struct			s_box
{
	unsigned char		sz;
	char				*str;
}						t_box;

/*
** Errors:
*/
enum					e_errors
{
	ERR_ARGS = -11,
	ERR_COUNT_SHARP,
	ERR_COUNT_TM_MAX,
	ERR_COUNT_TM_MIN,
	ERR_LINE_INVALID,
	ERR_MALLOC,
	ERR_OPEN,
	ERR_READ,
	ERR_SHAPE,
	ERR_TM,
	N_FAILURE = -1,
	FAILURE,
	SUCCESS
};

/*
** Prototypes:
*/
void					fllt_rm_tm(t_box *box, t_tm rm);

int						fllt_error_handler(int err);
int						fllt_find_next_sharp(char *tm_str, int x_init,
							t_pos *pos, int i);
int						fllt_find_next_tm(t_tm tm[], int i_tm);
int						fllt_is_placeable(t_box *box, t_pos init, t_tm tm);
int						fllt_place(t_box *box, t_pos pos, t_tm tm, int offset);
int						fllt_readfile(char *file, t_tm *tm);
int						fllt_resolve(t_box *box, t_tm tm[], t_pos cur_pos,
							int i_tm);

unsigned char			fllt_detect_shape(char *str, t_tm *tm);

t_box					*fllt_box_init(int nb_tm);
t_box					*fllt_box_resize(t_box *box);

t_pos					fllt_find_next_case(t_box *box, t_pos pos);
t_pos					fllt_pos_inc(t_pos pos, int size, char *str);

#endif
