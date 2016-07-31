#include <stdio.h>
#include <stdlib.h>	

int reverse(int num) {
	int result = 0; 
	int lastDigit;
	unsigned int count = sizeof(int) * 8 - 1;
	while(num != 0) {
		lastDigit = num & 1;
		result = result | lastDigit;
		num = num >> 1;
		result = result << 1;
		count --;
	}
	result = result << count;
	return result;
}

int main() {
	int num = 123456789;
	printf("%d\n", reverse(num));
	return 0;
}