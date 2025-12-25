/*2025.12.25
*练习1：① 编写程序，声明一个print1()函数，在函数中打印一个10 * 8的 *
*型矩形。
*② 编写程序，声明一个print2()函数，除打印一个10 * 8的 * 型矩形外，再
*计算该矩形的面积，并将其作为函数返回值。
*③ 编写程序，声明一个print3()函数，函数提供m和n两个参数，函
*数中打印一个m * n的 * 型矩形，并计算该矩形的面积， 将其作为返回值。
* 
* 此程序省略①和②
*/

#include<stdio.h>
#include<stdlib.h>

int print1(int m, int n);

int main() {
	int sum = print1(10, 8);
	printf("矩形面积为：%d\n",sum);
	return 0;
}

int print1(int m, int n) {
	int i, j;
	char** arr = (char**)malloc(m * sizeof(char*));
	for (i = 0; i < m; i++) {
		arr[i] = (char*)malloc(n * sizeof(char));
		for (j = 0; j < n; j++) {
			arr[i][j] = '*';
			printf("%3c", arr[i][j]);
		}
		printf("\n");
	}
	free(arr);
	return m * n;
}