//2025.12.21
//数组元素反转

#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	int strlen = sizeof(arr) / sizeof(arr[0]);
	int left = 0, right = strlen - 1,temp,i;
	printf("源数组：");
	for (i = 0; i < strlen; i++)
		printf("%d\0", arr[i]);
	printf("\n");
	for (i = 1; i <= (strlen / 2); i++)
	{
		temp = arr[right];
		arr[right] = arr[left];
		arr[left] = temp;
		left++;
		right--;
	}
	printf("现数组：");
	for (i = 0; i < strlen; i++)
		printf("%d\0", arr[i]);
}