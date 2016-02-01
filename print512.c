/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print512.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 18:42:59 by eleclet           #+#    #+#             */
/*   Updated: 2016/01/31 22:43:10 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	print512(int ox, int oy)
{
	mvprintw(ox++, oy, "  _____ __ ___  ");
	mvprintw(ox++, oy, " | ____/_ |__ \\ ");
	mvprintw(ox++, oy, " | |__  | |  ) |");
	mvprintw(ox++, oy, " |___ \\ | | / / ");
	mvprintw(ox++, oy, "  ___) || |/ /_ ");
	mvprintw(ox++, oy, " |____/ |_|____|");
}

void	print1024(int ox, int oy)
{
	mvprintw(ox++, oy, "  __  ___ ___  _  _   ");
	mvprintw(ox++, oy, " /_ |/ _ \\__ \\| || |  ");
	mvprintw(ox++, oy, "  | | | | | ) | || |_ ");
	mvprintw(ox++, oy, "  | | | | |/ /|__   _|");
	mvprintw(ox++, oy, "  | | |_| / /_   | |  ");
	mvprintw(ox++, oy, "  |_|\\___/____|  |_|  ");
}

void	print2048(int ox, int oy)
{
	mvprintw(ox++, oy, "  ___   ___  _  _   ___  ");
	mvprintw(ox++, oy, " |__ \\ / _ \\| || | / _ \\ ");
	mvprintw(ox++, oy, "    ) | | | | || || (_) |");
	mvprintw(ox++, oy, "   / /| | | |__   _> _ < ");
	mvprintw(ox++, oy, "  / /_| |_| |  | || (_) |");
	mvprintw(ox++, oy, " |____|\\___/   |_| \\___/ ");
}
