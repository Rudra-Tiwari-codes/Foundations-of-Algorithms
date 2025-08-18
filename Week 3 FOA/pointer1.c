/* Show pointer operations, example 1.
*/
#include  <stdio.h>
// static variables are stored in the data segment, not the stack segment
// so it looks different than x y z
// stores consecutively in memory
// 
int
main(int argc, char *argv[]) {
	static int w;
	int x, y, z;
	printf("&w = %16p\n&x = %16p\n&y = %16p\n&z = %16p\n", // hexadecimal representation of the memory address
		&w, &x, &y, &z); // & means you are using reference to the variable, which means you are getting the address of the variable in memory
        // 
	return 0;
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