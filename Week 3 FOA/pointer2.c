/* Show pointer operations, example 2.
*/
#include  <stdio.h>
// basically this is pass by reference
// pointers are used to pass the address
int
main(int argc, char *argv[]) {
	int n=123, *pi // what if we put them aage peeche
	double x=456.789,  *pd;
	printf("  n = %3d,   x = %7.3f\n", n, x);
	pi = &n; //using reference to the variable, which means you are getting the address of the variable n in memory
	pd = &x;
	printf("*pi = %3d, *pd = %7.3f\n", *pi, *pd);// if we don't put asterisk, it will print the address of the variable. Which variable is pointed to by the pointer.
	*pi = *pi+1;
	*pd = *pd / *pi; // When you change the value of *pd, it changes the value of x because pd is a pointer to x. Same for the other pointer.
    // *pi is dereferencing the pointer, which means you are getting the value stored at the address pointed to by pi
    // *pd is dereferencing the pointer, which means you are getting the value stored at the address pointed to by pd
    // So when you change the value of *pi, it changes the value of n because pi is a pointer to n.
	printf("*pi = %3d, *pd = %7.3f\n", *pi, *pd);
	printf("  n = %3d,   x = %7.3f\n", n, x);
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