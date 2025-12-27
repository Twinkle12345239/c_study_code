//2025.12.27
//定义函数，求一维数组元素的最大值

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define ARRLEN	5
int pMax(int* p, int n) {
	int max = *p;
	for (int i = 1; i < n; i++) {
		if (max < *(p + i)) {
			max = *(p + i);
		}
	}
	return max;
}

int main() {
	int arr[ARRLEN];
	printf("请输入%d个数", ARRLEN);
	for (int i = 0; i < ARRLEN; i++) {
		scanf("%d", &arr[i]);
	}
	printf("最大值为：%d", pMax(arr, ARRLEN));
}