/*
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char **argv) {
	int error = 0;
	int help = 0;
	if((argc > 2) || ((argc == 2) && (atoi(argv[1]) <= 0))){
		error = 1;
		help = 1;
	}
        if((argc == 2) && ((strcmp(argv[1], "--help") == 0) || (strcmp(argv[1], "-h")==0))) {
		help = 1;
	}
	if(help) {
		printf("Usage : %s [Nbr millisecond]\n", argv[0]);
		return error;
	}
        int delay = ((argc == 2) ? atoi(argv[1]) : 10);
	usleep(delay*1000);
	return 0;
}
