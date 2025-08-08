/* For loop example number 1.
*/
#include <stdio.h>

#define NUM_LINES 5

int
main(int argc, char *argv[]) {
	int i;
	for (i=1; i<=NUM_LINES; i=i+1) {
		printf("%4d%10d\n", i, i*(i+1)/2);
	}
	return 0;
}
