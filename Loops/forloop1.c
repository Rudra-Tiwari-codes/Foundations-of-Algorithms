/* For loop example number 1.
*/
#include <stdio.h>

#define NUM_LINES 5

int
main(int argc, char *argv[]) {
	int i;
	for (i=1; i<=NUM_LINES; i=i+1); // will return nothing
	
	{ //* Semicolon don't care..it will give error.///ask gpt
		printf("%4d%10d\n", i, i*(i+1)/2);
	}
	printf("%4d%10d\n", i, i*(i+1)/2);
	return 0;
}
// if you put semicolon after for loop, it will not give error but it will not print the output as expected.
// The semicolon after the for loop creates an empty statement, which means the loop does nothing.
// The block after the semicolon is executed only once after the loop completes, using the final value of i...it will print 6 and 21.