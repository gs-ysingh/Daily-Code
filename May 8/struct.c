#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>	

typedef struct student
{
	char *name;
	int age;
} student;

int main() {
	student *ptr;
	
	ptr = (student *) malloc(sizeof(student));
	ptr -> name = (char *) malloc(40 * sizeof(char));
	ptr -> age = (int *) malloc(sizeof(int));

	if(ptr == NULL || ptr -> name == NULL || ptr -> age == NULL) {
		printf("Memory not allocated");
	}

	scanf("%d", ptr -> age);
	scanf("%s", ptr -> name);

	printf("%d\n", ptr -> age);
	printf("%s\n", ptr -> name);

	free(ptr -> name);
	free(ptr -> age);
	free(ptr);
	return 0;
}