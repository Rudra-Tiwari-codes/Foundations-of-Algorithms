/* A flawed if statement.
*/
#include <stdio.h>
#define MAX_CLASS_SIZE 50

int
main(int argc, char *argv[]) {
	int class_size;
	printf("Enter class size: ");
	scanf("%d", &class_size);
	if ((class_size >= MAX_CLASS_SIZE)) {
		printf("Class is now full\n");
	} else {
		printf("More students can be accepted\n");
	}
	return 0;
}

/* =====================================================================
ed Edition.
   ================================================================== */
