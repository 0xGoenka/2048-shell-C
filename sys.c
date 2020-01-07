/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sys.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 15:18:04 by eleclet           #+#    #+#             */
/*   Updated: 2016/01/31 22:44:50 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	print3(int ox, int oy)
{
	mvprintw(ox++, oy, " ___  ");
	mvprintw(ox++, oy, "|__   ");
	mvprintw(ox++, oy, "   ) |");
	mvprintw(ox++, oy, "  / / ");
	mvprintw(ox++, oy, " / /_ ");
	mvprintw(ox++, oy, "|____|");
}

void	print4(int ox, int oy)
{
	mvprintw(ox++, oy, "  _  _   ");
	mvprintw(ox++, oy, " | || |  ");
	mvprintw(ox++, oy, " | || |_ ");
	mvprintw(ox++, oy, " |__   _|");
	mvprintw(ox++, oy, "    | |  ");
	mvprintw(ox++, oy, "    |_|  ");
}

void	print8(int ox, int oy)
{
	mvprintw(ox++, oy, "   ___  ");
	mvprintw(ox++, oy, "  / _ \\ ");
	mvprintw(ox++, oy, " | (_) |");
	mvprintw(ox++, oy, "  > _ < ");
	mvprintw(ox++, oy, " | (_) |");
	mvprintw(ox++, oy, "  \\___/ ");
}

void	pr(int ox, int oy, int n)
{
	if (n == 2)
		print3(ox,oy);
	if (n == 4)
		print4(ox, oy);
	if (n == 8)
		print8(ox, oy);
	if (n == 16)
		print16(ox, oy);
	if (n == 32)
		print32(ox, oy);
	if (n == 64)
		print64(ox, oy);
	if (n == 128)
		print128(ox, oy);
	if (n == 256)
		print256(ox, oy);
	if (n == 512)
		print512(ox, oy);
	if (n == 1024)
		print1024(ox, oy);
	if (n == 2048)
		print2048(ox, oy);
	mvprintw(ox, oy, ft_itoa(n));
}
