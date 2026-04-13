#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    int i;

    for(i = 1; i <= n; i++) {
        fact *= i;
    }

    return fact;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num >= 0)
        printf("Factorial = %lld", factorial(num));
    else
        printf("Factorial not defined for negative numbers");

    return 0;
}




