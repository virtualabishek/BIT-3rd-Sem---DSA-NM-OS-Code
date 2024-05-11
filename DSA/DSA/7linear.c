#include<stdio.h>
#include<stdlib.h>

#define SIZE 20

struct queue {
    int item[SIZE];
    int rear;
    int front;
};

typedef struct queue qu;

void insert(qu*);
void delete(qu*);
void display(qu*);

int main() {
    int ch;
    qu *q = (qu*)malloc(sizeof(qu)); // Memory allocation
    q->rear = -1;
    q->front = 0;
    
    printf("These are the menu options of the program.\n");
    printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
    
    do {
        printf("Enter your choice according to the instructions.\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                insert(q);
                break;
            case 2:
                delete(q);
                break;
            case 3:
                display(q);
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("You entered a wrong number. Please read the instructions again!\n");
                break;
        }
    } while(ch != 4);

    free(q); // Free allocated memory
    return 0;
}

// Inserting a new element
void insert(qu *q) {
    int d;
    printf("Enter the item to be inserted.\n");
    scanf("%d", &d);
    if(q->rear == SIZE - 1) {
        printf("Sorry, Queue is Full.\n");
    } else {
        q->rear++;
        q->item[q->rear] = d;
    }
}

// Deleting an element
void delete(qu *q) {
    int d;
    if(q->rear < q->front) {
        printf("Queue is empty.\n");
    } else {
        d = q->item[q->front];
        q->front++;
        printf("Deleted item is: %d\n", d);
    }
}

// Displaying the elements of the queue
void display(qu *q) {
    int i;
    if(q->rear < q->front) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue elements are:\n");
        for(i = q->front; i <= q->rear; i++) {
            printf("%d\t", q->item[i]);
        }
        printf("\n");
    }
}
