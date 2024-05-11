#include<stdio.h>
struct Node
{
    /* data */
    int data;
    struct Node *selfpointer;
};
int main() {
    struct Node mynode;
    mynode.data = 12;
    mynode.selfpointer = &mynode;
    printf("Data stored in node: %d", mynode.selfpointer->data);
    
    return 0;
}
