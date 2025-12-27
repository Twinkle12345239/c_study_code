//2025.12.27
//计算斐波那契数列第n项的值

#include<stdio.h>

int Fibonacci(int i) {
	if (i == 1 || i == 2) {
		return 1;
	}
	else
	{
		return Fibonacci(i - 1) + Fibonacci(i - 2);
	}
}
int main() {
	int num = Fibonacci(5);
	printf("num=%d", num);
}