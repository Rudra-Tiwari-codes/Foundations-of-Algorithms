/* Switch statement example 1.
*/
#include <stdio.h>
// If you write gcc -Wall -o file.c file.c it will overwrite the file
// with the compiled version, so be careful.
// If you write gcc -Wall -o file file.c it will create a new file called
// file, which is the compiled version of file.c
int
main(int argc, char *argv[]) {
	int month, length_of_month, year=2002;;
	for (month=1; month<=12; month++) {
	switch (month) {
		case 2:
			length_of_month = 28 +
				(year%4==0 && (year%100!=0 || year%400==0));
			break;
		case  4:
		case  6:
		case  9:
		case 11:
			length_of_month = 30;
			break;
		default:
			length_of_month = 31;
			break;
	}
	printf("month=%2d, length_of_month=%2d\n", month,length_of_month);
	}
	return 0;
}