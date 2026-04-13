#include <stdio.h>

int main() {
    int choice;
    float a, b, result;
    int i, num, fact = 1;

    printf("Simple Calculator\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("5. Power (x^y)\n6. Factorial (x!)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            result = a + b;
            printf("Result = %.2f", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            result = a - b;
            printf("Result = %.2f", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            result = a * b;
            printf("Result = %.2f", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero not allowed");
            break;

        case 5:
            printf("Enter base and exponent: ");
            scanf("%f %f", &a, &b);
            result = 1;
            for(i = 1; i <= b; i++) {
                result = result * a;
            }
            printf("Result = %.2f", result);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%d", &num);
            for(i = 1; i <= num; i++) {
                fact = fact * i;
            }
            printf("Factorial = %d", fact);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}