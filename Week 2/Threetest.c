/* Another dodgy guard in an if statement.
*/
#include <stdio.h>

int
main(int argc, char *argv[]) {
	int x=3, y=4, z=6; {
	if (x < y < z) //They don't have their mathematical meaning in C
        //put brckets around x < y and y < z to make it clear
    // First it interprets x < y, which is true (1), then it checks if 1 < z, which is also true
		z = z+1; }
	if (z > y > x)
		z = z+2;
	printf("After the two if statements z=%d\n", z);
	return 0;
}
