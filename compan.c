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
#include <math.h>

#define NFUNCTIONS 2
#define TAB_WIDTH 20
#define NROWS 30
#define STEP 1000

#define FUNC01_TITLE "n*log(n)"
long func01(long double n) {
	return (long) n * logl (n);
}

#define FUNC02_TITLE "n^2"
long func02(long double n) {
	return (long) n * n;
}

#define FUNC03_TITLE "2^n"
long func03(long double n) {
	return (long) powl(2.0, n);
}

#define FUNC04_TITLE "5^(log(n))"
long func04(long double n) {
	return (long) powl(5.0, logl(n));
}


int main()
{
	printf("Welcome to Complexity Analyzer!\n");
	printf("-------------------------------\n");

	printf("%*s%*s%*s\n",
		TAB_WIDTH, "N",
		TAB_WIDTH, FUNC01_TITLE,
		TAB_WIDTH, FUNC02_TITLE
	);

	for(int i = 0; i < TAB_WIDTH * (NFUNCTIONS + 1); i++) {
		printf("-");
	}

	printf("\n");

	for(int i = 0; i < NROWS; i++) {
		long double argument = (long double)(i * STEP) + 1;
		printf("%*d%*ld%*ld\n",
			TAB_WIDTH, (i * STEP) + 1,
			TAB_WIDTH, func01(argument),
			TAB_WIDTH, func02(argument)
		);
	}


	return EXIT_SUCCESS;
}