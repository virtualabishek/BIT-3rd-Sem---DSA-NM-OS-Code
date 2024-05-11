#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
};
typedef struct node NodeType;
NodeType *head = NULL;
void insert_at_first(int);
void insert_at_end(int);
void delete_first();
void delete_end();
void print();
int main() {
	int ch, data;
	do {
		printf("Implementation of Linked List\n");
		printf("Menus: \n1. Insert at first \n2. Insert at end\n3. Delete first\n");
		printf("4. Delete end\n");
		printf("5. Print\n6. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &ch);
		switch(ch) {
			case 1:
				printf("Enter data to be insert: ");
				scanf("%d", &data);
				insert_at_first(data);
				break;
			case 2:
				printf("Enter data to be insert: ");
                                scanf("%d", &data);
                                insert_at_end(data);
                                break;
			case 3:
				delete_first();
				break;
			case 4:
				delete_end();
				break;
			case 5:
				print();
				break;
			case 6:
				printf("Exiting...\n");
				break;
			default:
				printf("Invalid. Please try again.\n");
			}
	}while(ch!=6);
	
return 0;
}
void insert_at_first(int data) {
	NodeType* newNode = (NodeType* )malloc(sizeof(NodeType));
	newNode->data = data;
	newNode->next = head;
	head = newNode;
}
void insert_at_end(int data) {
	NodeType* newNode = (NodeType*)malloc(sizeof(NodeType));
	newNode->data = data;
	newNode->next = NULL;
	if(head == NULL) {
		head = newNode;
		return;
	}
	NodeType* temp = head;
	while(temp->next!= NULL) {
		temp = temp->next;
	}
	temp->next = newNode;
}
void delete_first() {
	if(head == NULL) {
		printf("List is empty. \n");
		return;
	}
	NodeType* temp = head;
	head = head->next;
	free(temp);
}
void delete_end() {
	if(head == NULL) {
		printf("List is empty. \n");
		return;
	}
	NodeType* temp = head;
	NodeType* prev = NULL;
	while(temp->next != NULL) {
		prev = temp;
		temp=temp->next;
	}
	   if(prev == NULL) {
        free(temp);
        head = NULL;
    } else {
        prev->next = NULL;
        free(temp);
	}
}

void print() {
	NodeType* temp = head;
	printf("List: ");
	while(temp!=NULL) {
		printf("%d  ", temp->data);
		temp= temp->next;
	}
	printf("\n");
}
		
