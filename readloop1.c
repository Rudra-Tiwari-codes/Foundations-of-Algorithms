/* Read an unbounded set of data with a while loop.
*/
#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[]) {
	int next, n, max;
	printf("Enter values, control-D to end: ");
	if (scanf("%d", &next)!=1) {
		printf("\nNo data entered\n");
		exit(EXIT_FAILURE);
	}
	n = 1;
	max = next;
	/* read further values and track the maximum */
	while (scanf("%d", &next)==1) {
		if (next>max) {
			max = next;
		}
		n += 1;
	}
	printf("%d values read, maximum is %d\n", n, max);
	return 0;
}