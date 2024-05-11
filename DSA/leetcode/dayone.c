#include<stdio.h>
int main() {
    int n,i, num[100], target;
    printf("Upto how many elements you want to enter: ");
    scanf("%d", &n);
    printf("Enter the array: \n");
    for(i=0; i<n; i++) {
        scanf("%d",&num[i]);
    }
    printf("Enter the target: ");
    scanf("%d", &target);
    if( num[0] + num[1] == target) {
        printf("Output: %d, %d. \n", num[0], num[1]);
    }
    else if(num[1] + num[2]== target) {
        printf("Output: %d, %d. \n", num[1], num[2]);
    }
     else if(num[2] + num[3]== target) {
        printf("Output: %d, %d. \n", num[2], num[3]);
    }
    else if(num[2] + num[3]== target) {
        printf("Output: %d, %d. \n", num[3], num[4]);
    }
    else if(num[4] + num[5]== target) {
        printf("Output: %d, %d. \n", num[4], num[5]);
    }
    else {
        printf("Not Possible. \n");
    }
return 0;
}
