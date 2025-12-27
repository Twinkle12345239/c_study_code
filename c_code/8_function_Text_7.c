//2025.12.27
//定义一个数组，通过函数给数组元素赋值

#include<stdio.h>

#define ARRLEN 5

void setarr(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		arr[i] = i * 10;
	}
}
int main() {
	int arr[ARRLEN] = {0};
	printf("遍历数组：");
	for (int i = 0; i < ARRLEN; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");
	setarr(arr, ARRLEN);
	printf("遍历数组：");
	for (int i = 0; i < ARRLEN; i++) {
		printf("%d\t", arr[i]);
	}
}