#include <stdio.h>

int main() {
	const char *nullString = NULL;
	printf("%d\n", strLength("Yogesh Singh"));
	printf("%d\n", strLength(""));
	printf("%d\n", strLength(nullString));
	return 0;
}

int strLength(const char *str) {
	if(str == NULL) {
		return 0;
	}

	const char *ch = str;
	int length = 0;
	while(*ch++ != '\0') {
		length++;
	}
	return length;
}