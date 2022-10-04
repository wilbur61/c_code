#include <stdio.h>
#include <limits.h>

int main() {
    /* INT_MIN in the least representable integer. */
    int a = INT_MIN;
    printf("a = %d\n", a);
    printf("Subtracting 1 from a...\n");
    a = a - 1;
    printf("a = %d\n", a);
    return 0;
}