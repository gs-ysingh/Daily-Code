#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>	

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

int length(struct node *headRef)
{
	int len = 0;
   	while(headRef != NULL) {
   		len++;
   		headRef = headRef -> next;
   	}
   	return len;
}

int lengthUsingPointerToPointer(struct node **headRef)
{
	int len = 0;
   	while(*headRef != NULL) {
   		len++;
   		(*headRef) = (*headRef) -> next;
   	}
   	return len;
}

int getNthNode(struct node **headRef, int n) {
	int i = 1;

	if(n < 1) {
		return -1;
	}
	while(i < n) {
		printf("value :%d\n", (*headRef) -> data);
		(*headRef) = (*headRef) -> next;
		i++;

		if(*headRef == NULL) {
			return -1;
		}
	}
	return (*headRef) -> data;
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
	printf("The length of list: %d\n", length(ptr)); 
	
	ptr = head;
	printf("The length of list: %d\n", lengthUsingPointerToPointer(&ptr));

	scanf("%d", &t);
	ptr = head;
	printf("Nth node: %d\n", getNthNode(&ptr, t));

	return 0;
}