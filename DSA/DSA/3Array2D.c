// Two Dimensional Matrix
//A program to find addition of any two matrices
#include<stdio.h>
#include<conio.h>


int main() {
int a[10][10], b[10][10], d[10][10], i,j,r,c;
printf("Enter the number of row\n");
scanf("%d",&r);
printf("Enter the number of column. \n");
scanf("%d",&c);
printf("Enter first matrix elements. \n");
for(i=0; i<r; i++) {
    for(j=0; j<c; j++) {
        scanf("%d",&a[i][j]);
    }
}
printf("Enter second matrix elements. \n");
for(i=0; i<r; i++) {
    for(j=0; j<c; j++) {
        scanf("%d",&b[i][j]);
    }
}
for(i=0; i<r; i++) {
    for(j=0; j<c; j++) {
        d[i][j]=a[i][j]+b[i][j];
    }
}

printf("The Sum is: \n");
for(i=0; i<r; i++) {
    for(j=0; j<c; j++) {
        printf("%d ",d[i][j]);
    }
    printf("\n");
}
return 0;
}
