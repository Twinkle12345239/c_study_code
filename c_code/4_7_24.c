#include <stdio.h>

//4_7
//#define PAGES 959
//int main()
//{
//	printf("*%d*\n", PAGES);
//	printf("*%2d*\n", PAGES);
//	printf("*%10d*\n", PAGES);   //����10���ַ�
//	printf("*%-10d*\n", PAGES);  //'-'�����
//
//	return 0;
//}

//4_10
#define BLURE "Autheneic imitation!"
int main()
{
	printf("[%2s]\n", BLURE);
	printf("[%24s]\n", BLURE);
	printf("[%24.5s]\n", BLURE);
	printf("[%-24.5s]\n", BLURE);

	return 0; 
}