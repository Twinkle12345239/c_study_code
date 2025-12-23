//2025.12.23
//定义指针变量p1,p2,默认各自指向整数a,b,从键盘输入，设计程序，使p1指向较大值，p2指向较小值

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int* p1, * p2, * temp;
	int a, b;
	p1 = &a;
	p2 = &b;
	scanf("%d%d", p1, p2);
	if (*p1 < *p2)
	{
		temp = p1;
		p1 = p2;
		p2 = temp;
	}
	printf("*p1=%d,*p2=%d", *p1, *p2);

}