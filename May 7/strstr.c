#include <stdio.h>
char *strString(const char *str, const char *c);

int main() {
	const char *ch = "Yogesh Singh";
	char *st = strString(ch, "gh");
	if(st == NULL) {
		printf("%s\n", "Not Found");	
	}
	else {
		printf("%c\n", *st);	
	}	
	return 0;
}

char *strString(const char *str, const char *c) {
	if(str == NULL || c == NULL) {
		return NULL;
	}
	int i = 0;
	const char *s = c;
	while(*str != '\0') {
		if(*str == *c) {
			*str++;
			*c++;
			i++;
		}
		else {
			*str++;
			c = s;
			i = 0;
		}	

		if(*c == '\0') {
			break;
		}	
	}
	if(*c == '\0' && i > 0) {
		return (char *)(str - i);
	}
	return NULL;
}