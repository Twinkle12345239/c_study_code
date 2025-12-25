//2025.12.25
//调用rand()函数，返回一个整数

#include<stdio.h>
#include<stdlib.h>

int getRandomNumber();
int main() {
	int RandNum = getRandomNumber(); //函数调用不要忘记写括号
	printf("RandNum=%d", RandNum);
	return 0;
}

int getRandomNumber() {
	return rand()%100; //rand()%整数：在（0~整数）之间取随机数
	//return rand() % 100 + 1; //rand()%整数+1：在（1~整数）之间取随机数
}