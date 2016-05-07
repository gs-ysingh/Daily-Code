#include <stdio.h>
int strCompare(const char *str, const char *c);

int main() {
	const char *ch = "Apple";
	int st = strCompare(ch, "Apple");
	printf("%d\n", st);
	return 0;
}

int strCompare(const char *str, const char *c) {
	if(str == NULL && c == NULL) {
		return 0;
	}
	else if(str == NULL && c != NULL) {
		return 0 - *c;
	}
	else if(str != NULL && c == NULL) {
		return *str;
	}
	else {
		while(*str != '\0' || *c != '\0') {
			*str++;
			*c++;
			if(*str == '\0' && *c == '\0') {
				return 0;
			}
			else if(*str == '\0') {
				return 0 - *c;
			}
			else if(*c == '\0') {
				return *str;
			}
		}
	}	
}