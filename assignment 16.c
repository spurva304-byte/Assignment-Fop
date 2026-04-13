#include <stdio.h>

int main() {
    int n, i, j=0, k=0;
    printf("Enter value of n: ");
    scanf("%d", &n);
    
    int arr[10], odd_arr[10], even_arr[10];
    
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (i=0; i<n; i++)
    {
        if(arr[i]%2 == 0) {
            even_arr[j] = arr[i];
            j++;
        }
        else {
            odd_arr[k] = arr[i];
            k++;
        }
    }
    
    printf("EVEN ARRAY\n");
    for(i=0; i<j; i++) {
        printf("%d\n", even_arr[i]);
    }
    
    printf("ODD ARRAY\n");
    for(i=0; i<k; i++) {
        printf("%d\n", odd_arr[i]);
    }

    return 0;
}