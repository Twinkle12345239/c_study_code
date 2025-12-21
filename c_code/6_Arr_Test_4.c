//2025.12,21
//memcpy(目标数组,源数组，要复制的字节数);//函数作用：复制数组所在的那一段内存

#include <stdio.h>
#include <string.h> //memcpy()所在头文件

#define strlen 5

int main()
{
	int arr1[strlen] = { 1,2,3,4,5 };
	int arr2[strlen];
	int i;
	memcpy(arr2, arr1, strlen*sizeof(int));
	for (i = 0; i < strlen; i++)
		printf("arr2[%d]=%d\n", i, arr2[i]);
}