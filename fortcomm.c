/* Cut out FORTRAN-style comments.
*/
#include <stdio.h>

int
main(int argc, char *argv[]) {
	int ch, incomment=0, newlinelast=1;
	while ((ch=getchar()) != EOF) {
		if (ch == 'C' && newlinelast) {
			incomment = 1;
		}
		if (!incomment) {
			putchar(ch);
		}
		if (ch == '\n') {
			incomment = 0;
			newlinelast = 1;
		} else {
			newlinelast = 0;
		}
	}
	return 0;
}
