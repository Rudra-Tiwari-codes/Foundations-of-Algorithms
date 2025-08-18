/* Even-odd mutual recursion.
*/
#include <stdio.h>
int eeee(int);
int oooo(int);
int
eeee(int n) {
	if (n==0) {
		return(1);
	} else {
		return oooo(n-1);
	}
}

int
oooo(int n) {
	if (n==0) {
		return(0);
	} else {
		return eeee(n-1);
	}
}

int
main(int argc, char *argv[]) {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("eeee(%d) = %d\n", n, eeee(n));
	printf("oooo(%d) = %d\n", n, oooo(n));
	return 0;
}

