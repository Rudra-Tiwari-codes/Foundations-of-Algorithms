/* Calculating cube roots using a converging approximation.
*/
#include <stdio.h>
#include <math.h>

double cube_root(double v);

int
main(int argc, char *argv[]) {
	double val, croot;
	printf("Enter a value: ");
	while (scanf("%lf", &val)==1) {
		croot = cube_root(val);
		printf("%16.9e, croot=%16.9e, ^3=%16.9e\n",
			val, croot, croot*croot*croot);
		printf("Enter a value: ");
	}
	return 0;
}
#if 0

double
cube_root(double v) {
	/* just return any old value at first... */
	return 1.0;
}
#endif

#define CUBE_LOWER 1e-6
#define CUBE_UPPER 1e+6
#define CUBE_ITERATIONS 25

/* Return an approximate cube root calculated
   by a converging iterative mechanism.
*/
double
cube_root(double v) {
	double next=1.0;
	int i;
	if (fabs(v)<CUBE_LOWER || fabs(v)>CUBE_UPPER) {
		printf("Warning: cube root may be inaccurate\n");
	}
	for (i=0; i<CUBE_ITERATIONS; i++) {
		next = (2*next + v/(next*next))/3;
	}
	return next;
}
