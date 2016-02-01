/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printn.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 18:29:54 by eleclet           #+#    #+#             */
/*   Updated: 2016/01/31 22:43:49 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void	print16(int ox, int oy)
{
	mvprintw(ox++, oy++, "   __   __  ");
	mvprintw(ox++, oy, " /_ | / /  ");
	mvprintw(ox++, oy, "  | |/ /_  ");
	mvprintw(ox++, oy, "  | | '_ \\ ");
	mvprintw(ox++, oy, "  | | (_) |");
	mvprintw(ox++, oy, "  |_|\\___/ ");
}

void	print32(int ox, int oy)
{
	mvprintw(ox++, oy++, "  ____ ___  ");
	mvprintw(ox++, oy, " |___ \\__ \\ ");
	mvprintw(ox++, oy, "   __) | ) |");
	mvprintw(ox++, oy, "  |__ < / / ");
	mvprintw(ox++, oy, "  ___) / /_ ");
	mvprintw(ox++, oy, " |____/____|");
}

void	print64(int ox, int oy)
{
	mvprintw(ox++, oy++, "    __ _  _   ");
	mvprintw(ox++, oy, "   / /| || |  ");
	mvprintw(ox++, oy, "  / /_| || |_ ");
	mvprintw(ox++, oy, " | '_ \\__   _|");
	mvprintw(ox++, oy, " | (_) | | |  ");
	mvprintw(ox++, oy, "  \\___/  |_|  ");
}

void	print128(int ox, int oy)
{
	mvprintw(ox++, oy++, "  __ ___   ___  ");
	mvprintw(ox++, oy, " /_ |__ \\ / _ \\ ");
	mvprintw(ox++, oy, "  | |  ) | (_) |");
	mvprintw(ox++, oy, "  | | / / > _ < ");
	mvprintw(ox++, oy, "  | |/ /_| (_) |");
	mvprintw(ox++, oy, "  |_|____|\\___/ ");
}

void	print256(int ox, int oy)
{
	mvprintw(ox++, oy++, "  ___  _____   __  ");
	mvprintw(ox++, oy, " |__ \\| ____| / /  ");
	mvprintw(ox++, oy, "    ) | |__  / /_  ");
	mvprintw(ox++, oy, "   / /|___ \\| '_ \\ ");
	mvprintw(ox++, oy, "  / /_ ___) | (_) |");
	mvprintw(ox++, oy, " |____|____/ \\___/ ");
}
