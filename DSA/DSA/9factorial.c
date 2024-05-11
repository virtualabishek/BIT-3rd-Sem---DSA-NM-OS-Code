#include <stdio.h>
int factorialNumber(int n);
int main() {
    int n;
    printf("Enter the positive number to factorial. \n");
    scanf("%d",  &n);
    printf("The factoial of %d is %d . \n",n,factorialNumber(n));
    return 0;
}
int factorialNumber(int n) {
    if(n==1 || n==0) 
    return 1;
    else {
        return n*factorialNumber(n-1);
    }
}
