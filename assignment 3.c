#include <stdio.h>
int main(){
    int num, i, table ;
    printf("Enter number: ");
    scanf("%d", &num);
    for(i=0;i<=10;i++){
        table = i*num;
    
    printf("%d times %d is : %d\n",num, i , table);
    }
    return 0;
}
