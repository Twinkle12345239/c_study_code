//2025.12.24
//指针数组

#include<stdio.h>
#define COL 4
#define ROW 3
int main() {
	int line0[COL] = { 1,2,3,4 };
	int line1[COL] = { 3,4,56,5 };
	int line2[COL] = { 3,4,6,8 };
	int i, j;
	int* arr[ROW];  //此处为野指针，未在使用前给指针赋初值
	arr[0] = line0;
	arr[1] = line1;
	arr[2] = line2;
	//int* arr[ROW] = { line0,line1,line2 };
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			printf("%d\t", *(arr[i] + j));
		}
		printf("\n");
	}
}