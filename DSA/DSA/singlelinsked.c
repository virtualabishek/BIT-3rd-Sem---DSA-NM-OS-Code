#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
int main() {
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link= NULL;
    printf(" \n%d.\n", head->data);
    printf(" \n%d.\n", head->link);

    struct node *current = malloc(sizeof(struct node));
    current -> data = 12;
    current->link= NULL;
    printf(" \n%d.\n", current->data);
    head->link = current;


    return 0;
}