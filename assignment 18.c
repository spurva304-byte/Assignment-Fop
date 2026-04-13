#include <stdio.h>

int calculate_length(char str1[]) {
    int length = 0;
    while (str1[length] != '\0') {
        length++;
    }
    return length;
}

void reversed_string(char str1[]) {
    int length = calculate_length(str1);
    int i, j;
    char temp = 0;
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
    }
}

int equality_string(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            printf("String is not equal\n");
            return 0; 
        }
        i++;
    }
    printf("Equal strings\n");
    return 1;
}
void palindrome_string(char str1[]) {
    int length = calculate_length(str1);
    int isPalindrome = 1;
    for (int i = 0; i < length / 2; i++) {
        if (str1[i] != str1[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
        printf("String is a Palindrome\n");
    else
        printf("String is not a Palindrome\n");
}
void find_substring(char mainStr[], char sub[]) {
    int i, j, found = 0;
    for (i = 0; mainStr[i] != '\0'; i++) {
        for (j = 0; sub[j] != '\0'; j++) {
            if (mainStr[i + j] != sub[j]) {
                break;
            }
        }
        if (sub[j] == '\0') {
            found = 1;
            break;
        }
    }
    if (found)
        printf("Substring found at index %d\n", i);
    else
        printf("Substring not found\n");
}
void find_substring(char mainStr[], char sub[]) {
    int i, j, found = 0;
    for (i = 0; mainStr[i] != '\0'; i++) {
        for (j = 0; sub[j] != '\0'; j++) {
            if (mainStr[i + j] != sub[j]) {
                break;
            }
        }
        if (sub[j] == '\0') {
            found = 1;
            break;
        }
    }
    if (found)
        printf("Substring found at index %d\n", i);
    else
        printf("Substring not found\n");
}
int main() {
    char str1[100], str2[100];
    
    printf("Enter string 1: ");
    scanf("%s", str1);
    
    // 1. Length
    printf("Length: %d\n", calculate_length(str1));
    
    // 2. Palindrome Check (Check BEFORE reversing)
    palindrome_string(str1);
    
    // 3. Substring Check
    printf("Enter a substring to search for: ");
    scanf("%s", str2);
    find_substring(str1, str2);
    
    // 4. Reverse
    reversed_string(str1);
    printf("Reversed string: %s\n", str1);

    return 0;
}