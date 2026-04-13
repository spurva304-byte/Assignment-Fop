#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], temp[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    printf("\n1.Length\n2.Copy\n3.Concatenate\n4.Compare\n5.Reverse\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Length of first string = %lu\n", strlen(s1));
            printf("Length of second string = %lu\n", strlen(s2));
            break;

        case 2:
            strcpy(temp, s1);
            printf("Copied string: %s\n", temp);
            break;

        case 3:
            strcpy(temp, s1);
            strcat(temp, s2);
            printf("Concatenated string: %s\n", temp);
            break;

        case 4:
            if(strcmp(s1, s2) == 0)
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
            break;

        case 5:
            strcpy(temp, s1);
            strrev(temp);
            printf("Reversed string: %s\n", temp);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}