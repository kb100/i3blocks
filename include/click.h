/*
 * click.h - definition of click parsing functions
 * Copyright (C) 2014  Vivien Didelot
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _CLICK_H
#define _CLICK_H

struct click {
	char *name;
	char *instance;
	char *button;
	char *x;
	char *y;
};

void click_parse(char *, struct click *);

#define LEFT_CLICK_BUTTON   1
#define MIDDLE_CLICK_BUTTON 2
#define RIGHT_CLICK_BUTTON  3
#define SCROLL_UP_BUTTON    4
#define SCROLL_DOWN_BUTTON  5

#endif /* _CLICK_H */
