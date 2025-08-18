/* Show the use of math library functions and constants.
*/
#include <stdio.h>
#include <math.h>

int
main(int argc, char *argv[]) {
	double x;
	printf("Enter a value for x: ");
	scanf("%lf", &x);
	printf("sin(x)  = %.15f\n", sin(x));
	printf("log(x)  = %.15f\n", log(x));
	printf("fabs(x) = %.15f\n", fabs(x));
	printf("sqrt(x) = %.15f\n", sqrt(x));
	printf("M_PI    = %.15f\n", M_PI);
	printf("M_SQRT2 = %.15f\n", M_SQRT2);
	return 0;
}
// Why does it show a red line under the "M_PI" and "M_SQRT2" constants?