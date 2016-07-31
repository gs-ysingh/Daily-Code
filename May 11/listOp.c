#include <stdio.h>
#include <stdlib.h>	
#include <assert.h>	

typedef struct node {
	int data;
	struct node *next;
} node;

//**headRef here is pointer to head (Pointer to Pointer)
//*headRef points to value of head which is NULL initially
void push(struct node **headRef, int data)
{
   	node *tmp = (node *) malloc(sizeof(node));
	tmp -> data = data;
	tmp -> next = *headRef;
	*headRef = tmp;
}

int pop(struct node **headRef) {
	if(headRef == NULL) {
		return -1;
	}

	int value = (*headRef) -> data;
	node *head = *headRef;	
	node *tmp = (head) -> next;
	head -> next = NULL;
	free(head);
	head = tmp;
	return value ;
}

void deleteAll(struct node **headRef) {
	assert(headRef != NULL);

	node *head = *headRef;
	node *next = NULL;
	while(head != NULL) {
		printf("delete All: %d\n", head -> data);
		next = head -> next;
		head -> next = NULL;
		free(head);
		head = next;
	}
}

int main() {
	node *head = NULL;

	int i, n, data, t;
	printf("Enter the list length: ");
	scanf("%d", &n);
	printf("length of list: %d\n", n);

	for (i = 0; i < n; ++i)
	{		
		scanf("%d", &data);
		printf("Entered value: %d\n", data);
		push(&head, data);
	}

	printf("Printing all the values: \n");

	node *ptr = head;
	while(ptr != NULL) {
		printf("%d\n", ptr -> data);
		ptr = ptr -> next;
	}
	
	ptr = head;
	int value = pop(&ptr);
	printf("Poped value: %d\n", value);

	//ptr = head;
	//deleteAll(&ptr);

	return 0;
}