/* c: options.h
 * Copyright (C) 2011 Miguel Serrano
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

#ifndef OPTIONS_H
#define OPTIONS_H

#include "matcher.h"

struct options {
    int complete;
    int icase;
    char *library;
    char *matcher_name;
    matcher_t matcher;
    double threshold;
    char *directory;
};

extern char *program_name;
extern struct options options;

void print_usage();
void print_version();

void parse_options(int, char *const[]);

#endif /* OPTIONS_H */
