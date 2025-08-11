/* For loop example number 2.
*/
#include <stdio.h>

#define NTIMES 5

int
main(int argc, char *argv[]) {
	int i, j;
	for (i=0; i<NTIMES; i++) {
		for (j=0; j<i; j++) {
			printf("i=%d,j=%d  ", i, j);

			i*=j;
			j=+2;
		}
		printf("\n");
	}
return 0;
}
