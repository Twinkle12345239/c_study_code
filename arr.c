#include <stdio.h>

//void main()
//{
//	//一维数组
//	/*int arr[] = { 1,2,3,4,5,6 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);//打印数组
//		printf("&arr[%d]=%p\n", i, &arr[i]);打印数组地址
//	}*/
//	
//
//	//二维数组
//	/*int arr[3][4] = {1,2,3,4,2,3,4,5,3,4,5,6};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d", arr[i][j]);//打印数组
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);//打印数组地址
//		}
//		printf("\n");
//	}*/
//	
//}


/*//冒泡排序
void bubble_sort(int arr[], int sz)        //arr这里看似是数组，实际是指针变量
{
	//趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序次数
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//相邻元素比较
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void main()
{
	int arr[] = { 8,2,7,4,9,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);                  //数组名实际上是，数组第一个元素的地址
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
}*/

/*//数组名确实能表示首元素的地址
//但是有两个例外：
//1.sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小，单位字节
//2.&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
void main()
{
	int arr[10];
	printf("%p\n", arr);      //arr就是首元素的地址
	printf("%p\n", arr+2);
	printf("----------------\n");

	printf("%p\n", &arr[0]);  //首元素的地址
	printf("%p\n", &arr[0]+2);
	printf("----------------\n");

	printf("%p\n", &arr);     //数组的地址
	printf("%p\n", &arr + 2);
	printf("----------------\n");

	int n = sizeof(arr);      //整个数组的大小
	printf("%d\n", n);
}*/


//二维数组的数组名
void main()
{
	int arr[3][4];
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//计算矩阵行数
	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));//计算矩阵列数
}