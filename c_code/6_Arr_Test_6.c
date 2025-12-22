//2025.12.22
//求二维数组的最大值以及对应的下标

#include <stdio.h>

#define ROW 3  //定义行数
#define COL 3  //定义列数

int main()
{
	int arr[ROW][COL] = { {1,2,4},{5,6,7},{8,9,10} };
	int max = arr[0][0], maxROW, maxCOL;
	int i,j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
				maxROW = i;
				maxCOL = j;
			}
		}
	}
	printf("max=%d\nmaxROW=%d\nmaxCOL=%d\n", max, maxROW, maxCOL);
}