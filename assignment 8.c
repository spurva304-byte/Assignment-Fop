#include <stdio.h>

int main() {
    float marks[5], total = 0, percentage;
    int i;
    int pass = 1; 
    printf("Enter marks of 5 subjects:\n");
    for(i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);
        if(marks[i] < 40) {
            pass = 0;
        }

        total += marks[i];
    }

    
    percentage = total / 5;

    
    printf("\nTotal Marks = %.2f", total);
    printf("\nPercentage = %.2f%%", percentage);

    
    if(pass == 1) {
        printf("\nResult: PASS");

        if(percentage >= 75)
            printf("\nGrade: Distinction");
        else if(percentage >= 60)
            printf("\nGrade: First Division");
        else if(percentage >= 50)
            printf("\nGrade: Second Division");
        else if(percentage >= 40)
            printf("\nGrade: Third Division");
    } else {
        printf("\nResult: FAIL");
        printf("\nGrade: No Grade");
    }

    return 0;
}