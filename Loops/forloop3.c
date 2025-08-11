/* For loop example number 3.
*/
#include <stdio.h>

int
main(int argc, char *argv[]) {
	int i;

	for (i=3; i<100000000; i*=10) {
		printf("%8d x %-8d = %12d\n", i, i, i*i);
	}
	return 0;
}
