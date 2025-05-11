#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//while循环中的
//break是用于永久的终止循环
//continue跳出本次循环后的代码，直接去判断部分，进行下一次循环的判断
//
/*int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			//跳出循环
			//break;

			//跳出循环后的代码，直接去判断代码，然后执行
			continue;
		printf("%d ", i);
		i++;
	}
}*/

/*int main()
{
	int i = 1;
	while (i <= 10)
	{
		i++;
		if (5 == i)
			continue;
		printf("%d ", i);
	}
}*/

/*//getchar()用法
int main()
{
	printf("请输入密码：>");
	char password[20] = { 0 };
	scanf("%s", &password);

	//gitchar()读取\n
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}

	printf("请确认密码(Y/N)：>");
	int ret = getchar();
	if ('Y' == ret)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}*/

//只打印数字字符
int main()
{
	char ch = '0';
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}
	return 0;
}
