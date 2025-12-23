//2025.12.23
//通过指针变量修改指向的内存中的数据
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 10, * ptr = NULL;
	ptr = &num;
	printf("%d\n", num);
	scanf("%d", ptr);  //将输入的值存入某地址中，相当于scanf("%d",&num);
	printf("%d\n", num);
}