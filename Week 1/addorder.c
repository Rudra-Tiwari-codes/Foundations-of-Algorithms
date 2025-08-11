/* Show the effects of floating point rounding.
*/

#include <stdio.h>

int
main(int argc, char *argv[]) {
	double x, y, z;
	x = 1.23e16;
	y = x + 4.56789;
	z = y - x;
	printf("x=%25.7f\ny=%25.7f\nz=%25.7f\n", x, y, z);
	return 0;
}

