#include <stdio.h>
#include <math.h>

int main() {
    int binary, decimal = 0, remainder, base = 1;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0) {
        remainder = binary % 10;    
        decimal = decimal + remainder * base;
        binary = binary / 10;       
        base = base * 2;            
    }

    printf("Decimal equivalent = %d", decimal);

    return 0;
}