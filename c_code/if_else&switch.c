#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
//if_else-----------------------------------------------------------------
/*int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
		else
			printf("haha\n");  //else悬空，else与最近的if匹配
	return 0;
}*/

/*//判断一个数是否为奇数
int main()
{
	int num = 0;
	scanf("%d", &num);
	if (num % 2 == 0)
		printf("偶数\n");
	else
		printf("奇数\n");
	return 0;
}*/

/*//列出1~100中的奇数 
int main()
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 2 == 1)
			printf("%d ", i);
	}
	return 0;
}*/


//switch-------------------------------------------------------------------
/*//写break
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一\n"); break;
	case 2:
		printf("星期二\n"); break;
	case 3:
		printf("星期三\n"); break;
	case 4:
		printf("星期四\n"); break;
	case 5:
		printf("星期五\n"); break;
	case 6:
		printf("星期六\n"); break;
	case 7:
		printf("星期七\n"); break;
	}
	return 0;
}*/

/*//不写break,先选择，后执行，直到break
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("weekday\n"); break;
	case 6:
	case 7:
		printf("weekend\n"); break;
	default:           //所有case不匹配的执行default
		printf("选择错误\n"); break;

	}
	return 0;
}*/

int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{//switch允许嵌套
		case 1:n++;
		case 2:m++; n++; break;
		}
	case 4:
		m++; break;
	default:
		break;
	}
	printf("m=%d,n=%d", m, n);
	return 0;
}