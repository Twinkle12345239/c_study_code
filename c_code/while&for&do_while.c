#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//whileѭ���е�
//break���������õ���ֹѭ��
//continue��������ѭ����Ĵ��룬ֱ��ȥ�жϲ��֣�������һ��ѭ�����ж�
//
/*int main()
{
	int i = 1;
	while (i <= 10)
	{
		if (5 == i)
			//����ѭ��
			//break;

			//����ѭ����Ĵ��룬ֱ��ȥ�жϴ��룬Ȼ��ִ��
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

/*//getchar()�÷�
int main()
{
	printf("���������룺>");
	char password[20] = { 0 };
	scanf("%s", &password);

	//gitchar()��ȡ\n
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}

	printf("��ȷ������(Y/N)��>");
	int ret = getchar();
	if ('Y' == ret)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}*/

//ֻ��ӡ�����ַ�
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
