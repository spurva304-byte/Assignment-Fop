#include <stdio.h>
int main() {
    int choice;
    float a, b;
    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    switch(choice) {
        case 1:
            printf("Result = %.2f", a + b);
            break;
        case 2:
            printf("Result = %.2f", a - b);
            break;
        case 3:
            printf("Result = %.2f", a * b);
            break;
        case 4:#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication Table of %d:\n", num);

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}


3
            if(b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Error! Division by zero.");
            break;
        default:
            printf("Invalid choice!");
    }
    return 0;
}


