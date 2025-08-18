/* Recursive divide and conquer approach to the
towers of Hanoi problem.
*/
#include <stdio.h>
#include <stdlib.h>

void hanoi(char from, char via, char to, int n);

int
main(int argc, char *argv[]) {
	int n;
	if (argc>1) { //  Count of number of arguments. (Disks)
		n = atoi(argv[1]);
	} else {
		printf("Usage: %s n\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	hanoi('A', 'B', 'C', n);
	return 0;
}

void
hanoi(char from, char via, char to, int n) {
	int i;
	if (n<=0) {
		return;
	}
	hanoi(from, to, via, n-1);
	for (i=1; i<n; i++) {
		printf("    ");
	}
	printf("Move a disk from %c to %c\n", from, to);
	hanoi(via, from, to, n-1);
}
