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
			printf("haha\n");  //else���գ�else�������ifƥ��
	return 0;
}*/

/*//�ж�һ�����Ƿ�Ϊ����
int main()
{
	int num = 0;
	scanf("%d", &num);
	if (num % 2 == 0)
		printf("ż��\n");
	else
		printf("����\n");
	return 0;
}*/

/*//�г�1~100�е����� 
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
/*//дbreak
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����һ\n"); break;
	case 2:
		printf("���ڶ�\n"); break;
	case 3:
		printf("������\n"); break;
	case 4:
		printf("������\n"); break;
	case 5:
		printf("������\n"); break;
	case 6:
		printf("������\n"); break;
	case 7:
		printf("������\n"); break;
	}
	return 0;
}*/

/*//��дbreak,��ѡ�񣬺�ִ�У�ֱ��break
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
	default:           //����case��ƥ���ִ��default
		printf("ѡ�����\n"); break;

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
		{//switch����Ƕ��
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