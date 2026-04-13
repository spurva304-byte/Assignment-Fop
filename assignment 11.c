#include <stdio.h>
#include <math.h>

int main() {
    int n, choice, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nMENU");
    printf("\n1. Square Root");
    printf("\n2. Square");
    printf("\n3. Cube");
    printf("\n4. Check Prime");
    printf("\n5. Factorial");
    printf("\n6. Prime Factors");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Square Root = %.2f", sqrt(n));
            break;

        case 2:
            printf("Square = %d", n * n);
            break;

        case 3:
            printf("Cube = %d", n * n * n);
            break;

        case 4: {
            int isPrime = 1;

            if(n <= 1)
                isPrime = 0;
            else {
                for(i = 2; i <= n / 2; i++) {
                    if(n % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }
            }

            if(isPrime)
                printf("Number is Prime");
            else
                printf("Number is Not Prime");
            break;
        }

        case 5:
            if(n < 0) {
                printf("Factorial not defined for negative numbers");
            } else {
                for(i = 1; i <= n; i++) {
                    factorial *= i;
                }
                printf("Factorial = %lld", factorial);
            }
            break;

        case 6:
            printf("Prime Factors: ");
            for(i = 2; i <= n; i++) {
                while(n % i == 0) {
                    printf("%d ", i);
                    n /= i;
                }
            }
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}