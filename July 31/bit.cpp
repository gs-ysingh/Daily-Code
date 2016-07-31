#include <stdio.h>
#include <stdlib.h>	

int setNthBitOne(int num, int n) {
   	int checkbit = 1 << n;
   	int result = num | checkbit;
   	return result;
}

int getNthBit(int num, int n) {
	int checkbit = 1 << n;
	int result = num & checkbit;
	if(result == checkbit) {
		return 1;
	}
	return 0;
}

int main() {
	int num = 64;
	printf("6th bit 64 is: %d\n", getNthBit(num, 6));
	int mNum;
	printf("5th bit 64 before : %d\n", getNthBit(num, 5));
	mNum = setNthBitOne(num, 5);
	printf("5th bit 64 after : %d\n", getNthBit(mNum, 5));
	return 0;
}