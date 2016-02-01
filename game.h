/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptao <ptao@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/30 12:04:47 by ptao              #+#    #+#             */
/*   Updated: 2016/01/31 22:30:19 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_H
# define GAME_H

# include <ncurses.h>
# include <string.h>
# include <stdlib.h>
# include <time.h>
# include "./libft/libft.h"

enum			e_const
{
	WIN_VALUE = 2048
};

void			print_rules(void);
int				define_lenside(void);
void			print_command(int line, int lenside);
void			init_grid(int lenside, int tab[lenside][lenside]);
int				chck_emptycase(int lenside, int tab[lenside][lenside]);
int				chck_nofusion(int lenside, int tab[lenside][lenside]);
int				chck_not2048(int lenside, int tab[lenside][lenside]);
int				move_dir(int len, int t[len][len], int dir);
int				move_up(int len, int t[len][len]);
int				move_down(int len, int t[len][len]);
int				move_left(int len, int t[len][len]);
int				move_right(int len, int t[len][len]);
void			setnu(int len, int tab[len][len]);
void			generate_random(int len, int tab[len][len]);
int				max_score(int len, int tab[len][len]);
int				chck_pow2(int n);
int				end_game(int score);
int				main_option(void);
int				key_action(int key, int lenside, int tab[lenside][lenside]);
void			print3(int ox, int oy);
void			print4(int ox, int oy);
void			print8(int ox, int oy);
void			print16(int ox, int oy);
void			print32(int ox, int oy);
void			print64(int ox, int oy);
void			print128(int ox, int oy);
void			print256(int ox, int oy);
void			print512(int ox, int oy);
void			print1024(int ox, int oy);
void			print2048(int ox, int oy);
void			pr(int ox, int oy, int n);
void			msquare(int j, int i);
int				set(void);
#endif
