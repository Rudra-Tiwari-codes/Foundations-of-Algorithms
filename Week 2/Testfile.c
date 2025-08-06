#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    int a, b, c, d, e, f, g;
    a = 6;
    b = a + 3 * 4;
    c = b - b % 4;
    d = b / 3;
    e = a + b / 2;
    f = (a + b / 2 + c) / 3;
    g = a - b + c - d + e - f;
    printf("a = %d", a);
    printf("b = %d", b);
    printf("c = %d", c);
    printf("d = %d", d);
    printf("e = %d", e);
    printf("g = %d", g);
    printf("f = %d", f);
}