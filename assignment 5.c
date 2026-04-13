#include <stdio.h>

// Function for addition
void addition() {
    int a[10][10], b[10][10], sum[10][10];
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter first matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Enter second matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("Sum matrix:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
}

// Function for saddle point
void saddle() {
    int a[10][10], r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<r;i++) {
        int min = a[i][0], col = 0;

        for(j=1;j<c;j++) {
            if(a[i][j] < min) {
                min = a[i][j];
                col = j;
            }
        }

        int k, flag = 1;
        for(k=0;k<r;k++) {
            if(a[k][col] > min) {
                flag = 0;
                break;
            }
        }

        if(flag) {
            printf("Saddle Point = %d\n", min);
            return;
        }
    }

    printf("No Saddle Point\n");
}

// Function for inverse (2x2)
void inverse() {
    float a[2][2], det;

    printf("Enter 2x2 matrix:\n");
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            scanf("%f",&a[i][j]);

    det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

    if(det == 0) {
        printf("Inverse not possible\n");
        return;
    }

    printf("Inverse matrix:\n");
    printf("%f %f\n", a[1][1]/det, -a[0][1]/det);
    printf("%f %f\n", -a[1][0]/det, a[0][0]/det);
}

// Function for magic square check
void magic() {
    int a[10][10], n, i, j;
    int sum, temp, flag = 1;

    printf("Enter size (n x n): ");
    scanf("%d", &n);

    printf("Enter matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    sum = 0;
    for(j=0;j<n;j++)
        sum += a[0][j];

    for(i=0;i<n;i++) {
        temp = 0;
        for(j=0;j<n;j++)
            temp += a[i][j];
        if(temp != sum) flag = 0;
    }

    for(j=0;j<n;j++) {
        temp = 0;
        for(i=0;i<n;i++)
            temp += a[i][j];
        if(temp != sum) flag = 0;
    }

    int d1=0,d2=0;
    for(i=0;i<n;i++) {
        d1 += a[i][i];
        d2 += a[i][n-i-1];
    }

    if(d1 != sum || d2 != sum)
        flag = 0;

    if(flag)
        printf("Magic Square\n");
    else
        printf("Not a Magic Square\n");
}

// Main menu
int main() {
    int choice;

    do {
        printf("\n--- MATRIX OPERATIONS ---\n");
        printf("1. Addition\n");
        printf("2. Saddle Point\n");
        printf("3. Inverse (2x2)\n");
        printf("4. Magic Square\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addition(); break;
            case 2: saddle(); break;
            case 3: inverse(); break;
            case 4: magic(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }

    } while(choice != 5);

    return 0;
}



