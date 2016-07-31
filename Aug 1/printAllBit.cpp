#include <stdio.h>
#include <stdlib.h>	

//print all the bits of number from left to right

void printAllBits(int num) {
	int len = sizeof(int) * 8 - 1;
	unsigned int checkbit = 1 << len;
	int result;
	for(int i = 1; i <= len + 1; i++) {
		result = checkbit & num;

		if(result ==  checkbit) {
			printf("%dst bit of 123456789 is %d\n", i, 1);
		}
		else {
			printf("%dst bit of 123456789 is %d\n", i, 0);
		}

		checkbit = checkbit >> 1;
	}
}

int main() {
	int num = 123456789;
	printAllBits(num);
	
	return 0;
}