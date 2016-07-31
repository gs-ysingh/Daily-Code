#include <stdio.h>
#include <stdlib.h>	

int countOne(int num) {
	int count = 0;
	while(num != 0) {
		count++;
		num = num & num - 1;
	}
	return count;
}

int main() {
	int num = 123456789;
	printf("%d\n", countOne(num));
	
	return 0;
}