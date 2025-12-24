//2025.12.24
//使用malloc()函数创建二维数组

/*复习:使用malloc()创建一维数组
* 
* int strlen=9;
* int *arr=(int *)malloc(strlen * sizeof(int));
* 
* malloc();--此函数用于动态分配堆内存
* free();--此函数用于释放堆内存
* 以上两函数的头文件为--#include<stdlid.h>
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ROW, COL;
	int i,j;
	//1.输入数组行数和列数
	printf("请输入第一维：");
	scanf("%d", &ROW);
	printf("请输入第二维：");
	scanf("%d", &COL);
	printf("请输入二维数组：");
	//2.创建二维空间（行）
	int** arr = (int**)malloc(ROW * sizeof(int*));
	for (i = 0; i < ROW; i++) {
		//3.创建一维空间（列）
		arr[i] = (int*)malloc(COL * sizeof(int));
		for (j = 0; j < COL; j++) {
			//4.从键盘中读取二维数组的值
			scanf("%d", &arr[i][j]);
		}
	}
	//5.按二维数组的格式打印出数组
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	//6.释放堆内存
	free(arr);  
}