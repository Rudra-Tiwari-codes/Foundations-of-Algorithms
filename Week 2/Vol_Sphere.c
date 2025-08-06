/* Calculate volume of a sphere given the radius*/
#include <stdio.h>
#define PI 3.14159

int 
main(int argc, char *argv[]) {
    double radius, volume;
    printf("Enter the radius of the sphere: ");
    if (scanf("%lf", &radius)!=1);
     // Check if input is valid
        printf("Invalid input. Please enter a number.\n");
        return -1;
    volume = (4.0 / 3.0) * PI * radius * radius * radius; /* Use 4.0 and 3.0 to actually show that FLOAT DIVISON is happening.. if you use just 4 and 3, it will return incorrect output*/
    printf("When the radius of the sphere is: %.2lf\n", radius);
    printf("The volume of the sphere is: %.2lf\n", volume);
    return 0;

    // int n, num_neg = 0;
    // num_neg += (n<0)
}