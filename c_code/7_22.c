#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//3_3
//int main()
//{
//	int x = 100;
//
//	printf("dec=%d;octal=%o;hex=%x\n", x, x, x);
//	printf("dec=%d;octal=%#o;hex=%#x\n", x, x, x);
//
//	return 0;
//}

//3_5
//int main()
//{
//	char ch;
//
//	printf("Please enter a character.\n");
//	scanf("%c", &ch);
//	printf("The code for %c is %d.\n", ch, ch);
//	
//	return 0;
//}

//3_10
//int main()
//{
//	float salary;
//
//	printf("\aEnter your desired monthly salary:");
//	printf(" $_______\b\b\b\b\b\b\b");
//	scanf("%f", &salary);
//	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
//	printf("\rGee!\n");
//
//	return 0;
//}

//Á·Ï°8
int main()
{
	float bs = 0.0f;
	printf("ÇëÊäÈë±­Êý£º");
	printf(" ___\b\b\b");
	scanf("%f", &bs);
	printf("Æ·ÍÑ=%.2f\n°»Ë¾=%.2f\nÌÀÉ×=%.2f\n²èÉ×=%.2f\n", bs / 2, bs * 8, bs * 16, bs * 48);
}