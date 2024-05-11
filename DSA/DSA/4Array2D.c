// Two Dimensional Matrix
//A program to find addition of any two matrices by using function

#include<stdio.h>
#include<conio.h>

// Corrected function prototype declaration
void function(int[][10], int, int);

int main() {
    int a[10][10], b[10][10], sum[10][10], r, c, i, j;
    printf("Enter the number of rows: \n");
    scanf("%d",&r);
    printf("Enter the number of columns: \n");
    scanf("%d",&c);
    printf("Enter the first matrix: \n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix: \n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            scanf("%d",&b[i][j]);
        }
    }
    // For Sum
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The first matrix is: \n");
    function(a, r, c);
    printf("The second matrix is: \n");
    function(b, r, c);
    printf("The Result is: \n");
    function(sum, r, c);
    return 0;
}

// Corrected function definition
void function(int d[][10], int r, int c) {
    int i, j; // Declaring variables i and j
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++) {
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
}
