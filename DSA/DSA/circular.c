#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *createNode() {
    struct node *n = (struct node*)malloc(sizeof(struct node));
    n->next = NULL;
    return n;
}

void insertAtBeginning(struct node **head, int data) {
    struct node *temp = createNode();
    temp->data = data;
    
    if (*head == NULL) {
        *head = temp;
        temp->next = *head;
    } else {
        struct node *last = *head;
        while (last->next != *head) {
            last = last->next;
        }
        temp->next = *head;
        *head = temp;
        last->next = temp;
    }
}

void insertAtTheEnding(struct node **head, int data) {
    struct node *temp = createNode();
    temp->data = data;
    
    if (*head == NULL) {
        *head = temp;
        temp->next = *head;
    } else {
        struct node *last = *head;
        while (last->next != *head) {
            last = last->next;
        }
        last->next = temp;
        temp->next = *head;
    }
}

void viewList(struct node **head) {
    struct node *temp;
    if (*head == NULL) {
        printf("List is empty\n");
    } else {
        temp = *head;
        printf("List: ");
        do {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != *head);
        printf("\n");
    }
}

int main() {
    struct node *head = NULL;
    insertAtBeginning(&head, 50);
    insertAtBeginning(&head, 40);
    insertAtBeginning(&head, 30);
    insertAtBeginning(&head, 20);
    insertAtTheEnding(&head, 10);

    viewList(&head);

    return 0;
}
