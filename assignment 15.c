#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    for(int i=0; i<=10; i++) {
        int num=((rand()%100)+1);
        printf("%d", num);
    }
    return 0;
}