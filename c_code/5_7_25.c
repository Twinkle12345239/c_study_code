#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//5_8
//int main()
//{
//	int n = 0;
//	size_t intsize;
//
//	intsize = sizeof(int);
//	printf("n=%d,n has %zd bytes; all ints have %zd bytes.\n", n, sizeof n, intsize);
//
//	return 0;
//}

//5_9 把秒数转化成分和秒
#define SEC_PER_MIN 60
int main()
{
	int sec, min, left;

	printf("Convert seconds to minutes and secounds!\n");
	printf("Enter the number of seconds (<=0 to quit):\n");
	scanf("%d", &sec);
	while (sec > 0)
	{
		min = sec / SEC_PER_MIN;
		left = sec % SEC_PER_MIN;
		printf("%d seconds is %d minutes ,%d seconds .\n",sec, min, left);
		printf("Enter next value (<=0 to quit):\n");
		scanf("%d", &sec);
	}
	printf("Done!\n");

	return 0;
}

//5_13
//int main()
//{
//	int count, sum;
//
//	count = 0;
//	sum = 0;
//	while (count++ < 20)
//		sum = sum + count;
//	printf("sum=%d\n", sum);
//
//	return 0;
//}