// Array implementing Stack
//Header File
#include<stdio.h>
//Global variable Declaration
int stack[50], top,n,choice, val, i;
//Declare Function
void push();
void pop();
void display();
//main function
int main() {
    top = -1;
    printf("Enter the size of stack. \n"); //size of stack will asked for users
    scanf("%d",&n);
    printf("Read the following instructions: \n");
    //user display 
    
    printf("1. Push \n 2. Pop \n 3. Display \n 4. Exit \n");
    do {
        printf("Enter your choice. Read above instruction.\n");
        scanf("%d", &choice);
        switch(choice) {
            case 1: {
                push(); //calling push function
                break;
            }
            case 2: {
                pop();
                break;
            }
            case 3: {
                display();
                break;
            }
            case 4: {
                printf("Exiting ........\n");
            }
            default: {
                printf("Sorry, You entered wrong number. Try again. \n");
            }
        }
    } //end of do
    while(choice!=4);
return 0;
} // end of main
//Push Operation
void push() {
    if(top>n-1) {
        printf("Stack Overflow. \n");
    }
    else {
        printf("Enter a value to be pushed. \n");
        scanf("%d", &val);
        top++; // top = top + 1;
        stack[top] = val;
    }
}
//Pop Operation 
void pop() {
    if(top<n-1) {
        printf("Stack Underflow. \n");
    }
    else {
        printf("The removed / pop element is: %d \n", stack[top]);
        top--;
    }
}
void display() {
    if(top>=0) {
    printf("Displaying the elements of the stack: \n");
    for(i=top; i>=0; i--) {
        printf("%d\n", stack[i]);
    }
    printf("Enter next choice. \n");
    }
    else {
        printf("Stack is empty now. \n");
    }
    
}

