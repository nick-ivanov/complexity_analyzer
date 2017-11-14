/*
    Complexity Analyzer -- empirically compare algorithm complexities
    Copyright (C) 2017-2018  Nick Ivanov <nnrowan@gmail.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

#define TAB_WIDTH 20

#define FUNC01_TITLE = "n*log(n)";
long double func01(long double n) {
	return n * logl (n);
}

#define FUNC02_TITLE = "n^2";
long double func02(long double n) {
	return n * n;
}

int main()
{
	printf("Welcome to Complexity Analyzer");


	return EXIT_SUCCESS;
}