/* Show scope of declarations, example 2.
*/
#include <stdio.h>
// What is stack, code and data segment?

// why do we write the function prototype here?
// Function prototype declaration
void func(int x); 

int z=2; // global variable z, gets stored in the data segment

int
main(int argc, char *argv[]) {
	int x=3; // no local variable z here, so the global z is used
	printf("main: x=%2d, z=%2d\n", x, z); // 3, 2
	func(x); // after it runs the first time, the global z will be modified
	printf("main: x=%2d, z=%2d\n", x, z);
	func(z);
	printf("main: x=%2d, z=%2d\n", x, z);
	return 0;
}

void
func(int x) {
	x = x+1;
	z = x+z+1; // modifies the global z. Why? Because there is no local variable z in this function.
	printf("func: x=%2d, z=%2d\n", x, z);
}
