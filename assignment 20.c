#include <stdio.h>

void swap_value(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping without pointers:\n");
    printf("a = %d b = %d\n", a, b);
}

void swap_pointer(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    swap_value(a, b);

    swap_pointer(&a, &b);

    printf("After swapping with pointers:\n");
    printf("x = %d y = %d\n", a, b);

    return 0;
}