#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//4_1
//#define DENSITY 62.4
//
//int main()
//{
//	float weight, volume;
//	int size, letters;
//	char name[40];
//
//	printf("Hi! What's your first name?\n");
//	scanf("%s", name);
//	printf("%s,what's your weight in pounds?\n", name);
//	scanf("%f", &weight);
//	size = sizeof(name);
//	letters = strlen(name);
//	volume = weight / DENSITY;
//	printf("Well,%s,your volume is %2.2f cubic feet .\n",name,volume);
//	printf("Also,your first name has %d letters,\n", letters);
//	printf("and we have %d bytes to store it.\n", size);
//
//	return 0;
//}

//4_2
//#define PRAISE "You are an extraordinary being."
//
//int main()
//{
//	char name[40];
//
//	printf("What's your name?");
//	scanf("%s", name);       //scanf()遇到空格，制表符，换行符时就不再读取输入
//	printf("Hello,%s.%s\n", name, PRAISE);
//	
//
//	return 0;
//}

//4_5
#include <limits.h>  //整型限制
#include <float.h>   //浮点型限制

int main()
{
	printf("Some number limits for this system:\n");
	printf("Biggest int:%d\n", INT_MAX);
	printf("Smallest long long :%lld\n", LLONG_MIN);
	printf("One byte = %d bits on this system.\n", CHAR_BIT);
	printf("Largest dounle :%e\n", DBL_MAX);    //%e—科学计数法转换说明
	printf("Smallest normal float :%e\n", FLT_MIN);

	return 0;

}