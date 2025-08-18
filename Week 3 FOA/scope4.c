/* Show scope of declarations, example 4.
*/
#include <stdio.h>
// global variables are stored in the data segment
// local variables are stored in the stack segment
// static variables are also stored in the data segment, but they retain their value between function calls
void func(int);
int x=6, y=7, z=10;
int main(int argc, char **argv) {
	int z=5;
	func(x);
	func(y);
	func(z);
	printf("main: x=%2d, y=%2d, z=%2d\n", x, y, z);
	return 0;
}
void // local variable, then local static variable, then global variable
// in the example of 9 9 10, when we do func(y), it takes x as 8?? OR y as 9?
func(int x) {
	x = x+1;
	y = y+1;
	printf("func: x=%2d, y=%2d, z=%2d\n", x, y, z);
}
// DON'T USE GLOBAL VARIABLES UNLESS YOU HAVE TO