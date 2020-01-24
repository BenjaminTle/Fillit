/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_fillit.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 15:12:02 by thplessi          #+#    #+#             */
/*   Updated: 2018/12/22 00:26:44 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef G_FILLIT_H
# define G_FILLIT_H

# include <fillit.h>

/*
** Tetrominos:
*/
# define FLLT_TM_I_0	"#...\n#...\n#...\n#...\n"
# define FLLT_TM_I_1	"####\n....\n....\n....\n"
# define FLLT_TM_J_0	".#..\n.#..\n##..\n....\n"
# define FLLT_TM_J_1	"#...\n###.\n....\n....\n"
# define FLLT_TM_J_2	"##..\n#...\n#...\n....\n"
# define FLLT_TM_J_3	"###.\n..#.\n....\n....\n"
# define FLLT_TM_L_0	"#...\n#...\n##..\n....\n"
# define FLLT_TM_L_1	"###.\n#...\n....\n....\n"
# define FLLT_TM_L_2	"##..\n.#..\n.#..\n....\n"
# define FLLT_TM_L_3	"..#.\n###.\n....\n....\n"
# define FLLT_TM_O_0	"##..\n##..\n....\n....\n"
# define FLLT_TM_S_0	".##.\n##..\n....\n....\n"
# define FLLT_TM_S_1	"#...\n##..\n.#..\n....\n"
# define FLLT_TM_T_0	"###.\n.#..\n....\n....\n"
# define FLLT_TM_T_1	".#..\n##..\n.#..\n....\n"
# define FLLT_TM_T_2	".#..\n###.\n....\n....\n"
# define FLLT_TM_T_3	"#...\n##..\n#...\n....\n"
# define FLLT_TM_Z_0	"##..\n.##.\n....\n....\n"
# define FLLT_TM_Z_1	".#..\n##..\n#...\n....\n"

/*
** Global array containing all tetrominos:
*/
char					g_tm_strs[N_TM][N_ROT][TM_LEN] = {
	{
		"\x02",
		FLLT_TM_I_0,
		FLLT_TM_I_1
	},
	{
		"\x04",
		FLLT_TM_J_0,
		FLLT_TM_J_1,
		FLLT_TM_J_2,
		FLLT_TM_J_3
	},
	{
		"\x04",
		FLLT_TM_L_0,
		FLLT_TM_L_1,
		FLLT_TM_L_2,
		FLLT_TM_L_3
	},
	{
		"\x01",
		FLLT_TM_O_0
	},
	{
		"\x02",
		FLLT_TM_S_0,
		FLLT_TM_S_1
	},
	{
		"\x04",
		FLLT_TM_T_0,
		FLLT_TM_T_1,
		FLLT_TM_T_2,
		FLLT_TM_T_3
	},
	{
		"\x02",
		FLLT_TM_Z_0,
		FLLT_TM_Z_1
	}
};

#endif
