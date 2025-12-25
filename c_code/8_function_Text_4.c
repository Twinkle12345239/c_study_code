/*2025.12.25
定义函数max()，求两个double型变量的最大值，
求三个double型变量的最大值
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double daulMax(double i, double j);
double triMax(double i, double j, double k);

int main() {
	double i=1.2, j=2.0, k=4.4;
	printf("%.2f和%.2f的最大值为%.2f\n", i, j, daulMax(i, j));
	printf("%.2f和%.2f和%.2f的最大值为%.2f", i, j,k, triMax(i, j,k));
	return 0;
}

double daulMax(double i, double j) {
	return (i > j ? i : j);
}
double triMax(double i, double j, double k) {
	return daulMax(daulMax(i, j), k);
}