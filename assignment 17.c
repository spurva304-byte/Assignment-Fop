#include <stdio.h>

int main() {
    int n, i;
    float x, term, sum = 0;
    int sign = 1;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    term = x;  // first term

    for(i = 1; i <= n; i++) {
        sum = sum + sign * term;

        // calculate next term
        term = term * x * x / ((2*i) * (2*i + 1));

        sign = -sign;  // change sign
    }

    printf("Sum of sine series = %f", sum);

    return 0;
}