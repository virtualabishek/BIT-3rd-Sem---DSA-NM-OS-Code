// Sample for 1 dimensional array
//Adding all and giving average
#include<stdio.h>
int main() {
    int ar[100], n, avg, sum = 0;
    printf("Upto, how many number you want to go? \n");
    scanf("%d", &n);
    printf("Enter the numbers. \n");
    for ( int i = 0; i<n; i++) {
        scanf("%d",&ar[i]);
        sum = sum + ar[i];
    }
    avg = sum/n;
    printf("The sum is: %d. \n The average is: %d", sum, avg);
    return 0;
}