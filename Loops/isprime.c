/* Determine if an input number is prime.
*/
#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[]) {
	int n, divisor, isprime;
	printf("Enter a number n: ");
	if (scanf("%d", &n) != 1) {
		printf("Incorrect input\n");
		exit(EXIT_FAILURE);
	}
	/* a value for n has been read */
	isprime = 1;
	for (divisor=2; divisor*divisor<=n; divisor++) { // why sqaure root?
		// if divisor is a factor of n, then n is not prime
		// if divisor*divisor > n, then no need to check further
		// because all factors of n are less than or equal to square root of n
		// and we have already checked all numbers up to square root of n
		if (n%divisor==0) {
			isprime = 0;
			break;
		}
	}
	if (isprime == 1) { // he did x and
		printf("%d is a prime number\n", n);
	} else {
		printf("%d = %d * %d\n", n, divisor, n/divisor);
	}
	return 0;
}
