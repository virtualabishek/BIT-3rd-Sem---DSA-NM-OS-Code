// Linear Queue
// This is program that represents linear queue implementation using array.
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
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
    qu *q = (qu*)malloc(sizeof(qu)); // Allocate memory for q
    if (q == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    q->rear=-1;
    q->front=0;
    printf("This are the menu of the progarm. \n");
    printf("1. Inserting \n 2. Delete \n 3. Display \n 4. Exit #n");
    do {
        printf("Enter your choice, according to instruction. \n");
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
            exit(0);
            break;
            default:
            printf("You intered wrong number. Please read instruction again! \n");
            //break;
        } //end of switch
    } while(ch!=4); //end of do
    free (q); 
    return 0;
} // end of main fucntion

// Insering a new elements
void insert( qu *q) {
    int d;
    printf("Enter the items to be inserted. \n");
    scanf("%d", &d);
    if(q->rear==SIZE-1) {
        printf("Sorry, Queue is Full. \n");
    } // if end
    else {
        q->rear ++;
        q->item[q->rear]=d;

    }
} //end of insert

//Deleting 
 void delete(qu *q) {
    int d;
    if(q->rear<q->front) {
        printf("Queue is empty. \n");
    }
    else {
        d=q->item[q->front];
            q->front++;
            printf("Deleted item is:  %d \n",d);
        } //end of else
 } //delete finished
 void display(qu *q) {
    int i;
    if(q->rear<q->front) {
        printf("Queue is empty. \n");
    }
    else {
        for(i=q->front; i<=q->rear; i ++) {
            printf(" \n%d\t", q->item[i]);
        }

    } // end of else
 } //end of display