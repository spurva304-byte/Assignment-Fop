#include<stdio.h>

int smalldiv (int a)
{
    int i=1;
    for (i=2; i<=a; i++)
    {
        if (a%i==0)
            break;
    }
    return i;
}

int findgcd(int a, int b)
{
    while (b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int main() {
    int a, b, gcd, smalldiv1;
    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);
    
    smalldiv1 = smalldiv(a);
    gcd = findgcd(a, b);
    
    printf("GCD of %d and %d = %d\n", a, b, gcd);
    printf("SCD of %d = %d", a, smalldiv1);
    
    return 0;
}