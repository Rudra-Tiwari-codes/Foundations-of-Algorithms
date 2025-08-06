/* What if does the dangling else connect to?
*/
#include <stdio.h>
int
main(int argc, char *argv[]) {
	int x=3, y=4, z=6;
	if (x>2) {
		if (y>6)
			z = 7;
    }
	    else // This else is associated with the first if (x>2)
		z = 8; //Explicit Curly braces would have made it clear
	printf("After the if statement z=%d\n", z);
	return 0;
}
/* This code demonstrates the dangling else problem in C. */