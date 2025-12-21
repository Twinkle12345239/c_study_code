//2025.12.21
//定义一个int类型长度为10的数组，求其最大值，最小值，和，平均值
#include <stdio.h>
int main()
{
	int arr[10] = { 11,21,32,12,34,54,75,56,89,35 };
	int arrlen = sizeof(arr) / sizeof(arr[0]);
	int i, max = arr[0], min = arr[0], sum = arr[0];
	float average;
	for (i = 1; i < arrlen; i++)
	{
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
		sum += arr[i];
	}
	average = (float)sum / arrlen;
	printf("max=%d\nmin=%d\nsum=%d\naverage=%.2f\n", max, min, sum, average);

}