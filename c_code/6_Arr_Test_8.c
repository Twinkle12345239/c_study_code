//2025.12.22
//打印杨辉三角

#include <stdio.h>

#define ROW 10

int main()
{
	int yanghui[ROW][ROW];
	int i, j;
	for (i = 0; i < ROW; i++)  //赋值
	{
		yanghui[i][0] = 1; //初始第一列的值为1
		yanghui[i][i] = 1; //初始对角线的值为1
		for (j = 1; j < i; j++)
			yanghui[i][j] = yanghui[i - 1][j - 1] + yanghui[i - 1][j];
	}
	for (i = 0; i < ROW; i++)  //打印杨辉三角
	{
		for (j = 0; j <= i; j++)
			printf("%4d", yanghui[i][j]);
		printf("\n");
	}
}