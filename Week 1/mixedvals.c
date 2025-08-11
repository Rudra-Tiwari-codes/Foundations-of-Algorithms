/* Show what happens when different types are assigned.
*/

#include <stdio.h>

int
main(int argc, char *argv[]) {
	int n; double z; char c;
	n = 42; z = 42; c = 42;
	printf("n=%3d,  z=%12.8f,  c=%c\n", n, z, c);
	n = 100.9; z = 100.9; c = 100.9;
	printf("n=%3d,  z=%12.8f,  c=%c\n", n, z, c);
	n = 'a'; z = 'a'; c = 'a';
	printf("n=%3d,  z=%12.8f,  c=%c\n", n, z, c);
	return 0;
}
