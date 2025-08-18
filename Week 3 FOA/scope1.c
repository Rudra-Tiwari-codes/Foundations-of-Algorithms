/* Show scope of declarations, example 1.
*/
#include <stdio.h>
// explain this code snippet

// Function prototype declaration
void func(int x);

int
main(int argc, char *argv[]) {
	int x=3, z=5;
	printf("main: x=%2d, z=%2d\n", x, z);
	func(x);
	printf("main: x=%2d, z=%2d\n", x, z);
	func(z);
	printf("main: x=%2d, z=%2d\n", x, z);
	return 0;
}
// Passing arguments by value
void
func(int x) { // local variable x
	int z=7; // local variable z, gets stored in the stack segment
	x = x+1;
	z = x+z+1;
	printf("func: x=%2d, z=%2d\n", x, z);
}
// explain the entire code to me


