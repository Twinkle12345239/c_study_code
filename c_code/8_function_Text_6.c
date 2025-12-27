//2025.12.27
//对比传值与传址的方式

#include<stdio.h>

void text1(int a, int b, int c) {
	a += 1;
	b += 1;
	c += 1;
}

void text2(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		arr[i] += 1;
	}
}

int main() {
	//测试text1
	int arr[3] = { 1,2,3 };
	printf("调用函数前数组各元素的值：");
	printf("%d,%d,%d\n", arr[0], arr[1], arr[2]);
	text1(arr[0], arr[1], arr[2]);
	printf("调用函数后数组各元素的值：");
	printf("%d,%d,%d\n", arr[0], arr[1], arr[2]);

	//测试text2
	int arr2[3] = { 2,3,4 };
	printf("调用函数前数组各元素的值：");
	printf("%d,%d,%d\n", arr2[0], arr2[1], arr2[2]);
	text2(arr2, 3);
	printf("调用函数后数组各元素的值：");
	printf("%d,%d,%d\n", arr2[0], arr2[1], arr2[2]);
}