// Stack operation: push and pop. 
#include<stdio.h>
#include<conio.h>
int stack[100], i,j,n, choice=0, top=-1;
void pop();
void push();
void display();
void main() {
    printf("Enter the number of elements in the stack. \n");
    scanf("%d", &n);
    printf("---------------Stack Operation---------------\n");
    while(choice!=4) {
    printf("Chose one of the following options: \n");
    printf("1.Push\n2.Pop\n3. Display\n4.Exit\n");
    printf("---------------------------------------------------\n");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
        case 4:
        printf("Exiting.\n");
        printf("---------------------------------------------------\n");
        break;
        default:
        printf("SOrry, You Entered Wrong Variable. \n");
        printf("---------------------------------------------------\n");
        break;
    }
    };
}
void push() {
    int val;
    if(top == n-1 ) {
        printf("Stack is Overflow. \n");
        printf("---------------------------------------------------\n");
    }
    else {
        printf("Enter the value to entered. \n");
        scanf("%d", &val);
        printf("---------------------------------------------------\n");
        top = top + 1;  // ++
        stack[top] = val; // if top is 1 with value A, top - 2 = B 
    }
}
void pop() {
    if(top == -1) {
        printf("Underflow. \n");
        printf("---------------------------------------------------\n");
    }
    else {
    top = top - 1;  /// top = 3 => C, decrement top by 1, top will be 2 and C will be deleted or pop
    
    }
}
void display() {
    printf("Elements are: \n");
    for(i = top; i>=0; i --) {// if top is at 5, it decrements like from 5 to 4 to 3 to 2 to 1 to 0
    printf("%d\n", stack[i]);
    }
        printf("Displayed. \n");

    if(top == -1) {
        printf("Stack is empty. \n");
        printf("---------------------------------------------------\n");
 
    }
}
