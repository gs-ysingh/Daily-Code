#include <stdio.h>
char *strCharacter(const char *str, int c);

int main() {
	const char *ch = "Yogesh Singh";
	char *st = strCharacter(ch, 'Y');
	if(st == NULL) {
		printf("%s\n", "Not Found");	
	}
	else {
		printf("%c\n", *st);	
	}	
	return 0;
}

char *strCharacter(const char *str, int c) {
	if(str == NULL) {
		return NULL;
	}
	while(*str != '\0') {
		if(*str == c) {
			return (char*)str;
		}
		*str++;
	}
	return NULL;
}