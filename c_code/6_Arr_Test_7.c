//2025.12.22
//将一个二维数组的行和列交换，存储到另一个数组中

#include <stdio.h>

#define ROW 3
#define COL 2

int main()
{
	int arr1[ROW][COL] = { {1,2},{3,4},{5,6} };
	int arr2[COL][ROW];
	int i, j;
	printf("arr1:\n");
	for (i = 0; i < ROW; i++)  //打印数组arr1
	{
		for (j = 0; j < COL; j++)
			printf("%3d", arr1[i][j]);
		printf("\n");
	}
	printf("arr2:\n");
	for (i = 0; i < COL; i++)
	{
		for (j = 0; j < ROW; j++)
		{
			arr2[i][j] = arr1[j][i];
			printf("%3d", arr2[i][j]);
		}
		printf("\n");
	}
}