/* Show scope of declarations, example 3.
*/
#include <stdio.h>

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

void
func(int x) {
	static int z=7; 
    static int count=0; 
    // IT GETS UPDATEd TO 12, If static wasnn't used, it would be initialized to 7 each time the function is called
    // static variable y, retains its value between function calls
    // runs only the first time // static variable z, retains its value between function calls which means that it is not reinitialized each time the function is called.
	// static variables are stored in the data segment, not the stack segment.
    x = x+1;
	z = x+z+1;
    count++;
	printf("func: x=%2d, z=%2d\n", x, z);
}

/* =====================================================================
   Program written by Alistair Moffat, as an example for the book
   "Programming, Problem Solving, and Abstraction with C", Pearson
   Custom Books, Sydney, Australia, 2002; revised edition 2012,
   ISBN 9781486010974.

   See http://people.eng.unimelb.edu.au/ammoffat/ppsaa/ for further
   information.

   Prepared December 2012 for the Revised Edition.
   ================================================================== */