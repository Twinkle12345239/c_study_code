#include <stdio.h>

//5_4
//int main()
//{
//	int num = 1;
//	while (num < 21)
//	{
//		printf("%4d %6d\n", num, num * num);
//		num += 1;
//	}
//
//	return 0;
//}

//5_5Ö¸Êý±¬Õ¨
#define SQUARES 64
int main()
{
	const double CROP = 2E16;
	double current, total;
	int count = 1;

	printf("square    grains       total        fraction of  \n");
	printf("          added        grains       world total \n");
	total = current = 1.0;
	printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
	while (count < SQUARES)
	{
		count = count + 1;
		current = 2.0 * current;
		total = total + current;
		printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
	}
	printf("That's all.\n");

	return 0;
}

//5_7
//int main()
//{
//	int top, score;
//	 
//	top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
//	printf("top=%d,score=%d\n", top, score);
//
//	return 0;
//}