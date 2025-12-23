//2025.12,23
//同类指针减法运算

#include <stdio.h>
#include <stddef.h>  //存放ptrdiff_t类型的头文件，ptrdiff_t是一个带符号的整数类型别名

int main()
{
	int* p1, * p2;
	int arr[3] = { 10,20,30 };
	p1 = &arr[0];
	p2 = &arr[2];
	ptrdiff_t dif = p2 - p1;  //求相隔多少个数据单位，而不是字节
	printf("p1的地址为：%p\n", p1);  //地址可以用任何格式输出，比如整型%d,十六进制%hx
	printf("p2的地址为：%p\n", p2);
	printf("p2-p1=%d\n", dif); 
}