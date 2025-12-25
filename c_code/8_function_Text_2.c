//2025.12.25
//return后不跟值

#include<stdio.h>

void printNum(int start, int limit);
int main() {
	printNum(1, 20);
	return 0;
}
void printNum(int start, int limit) {
	for (int i = start; i <= limit; i++) {
		if (i % 5 == 0) {
			return;  //只要执行return,直接结束整个函数的执行
		}
		printf("i=%d\n", i);
	}
	printf("over!\n");
}