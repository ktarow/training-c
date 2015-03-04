#include <stdio.h>

void goEast(int * x) {
    *x = *x + 1;
}

void goNorth(int * y) {
    *y = *y + 1;
}

int main() {
    int x = 0;
    int y = 0;

    goNorth(&x);
    goNorth(&x);
    goNorth(&x);
    goEast(&y);
    goEast(&y);
    goEast(&y);
    goEast(&y);

    printf("x = %d\n", x);
    printf("y = %d\n", y);
}
