#include <stdio.h>
int main()
{
	/*int a = 9 / 2;
	float b = 9 / 2;
	float c = 9 / 2.0;
	int d = 9 % 2;
	printf("%d\n", a);
	printf("%f\n", b);
	printf("%f\n", c);
	printf("%d\n", d);*/
	//int a = 2;
	//int b = a << 30;
	//printf("%d\n", b);//二进制左移
	//int c = 0;
	//int d = c >> 1;
	//printf("%d\n", d);//二进制右移（1右移为0，0右移为0）
	//int a = 10;
	//a = -a;
	//printf("%d\n",!a);
	//0就是假，非0就是真，！为转换真假
	/*if (a)
	{

	}
	if (!a)
	{

	}*/
	/*int a = 10;
	printf("%d\n", sizeof (int));
	printf("%d\n", sizeof a);
	return 0;*/
	int arr[10] = { 0 };
	printf("%d\n", sizeof(arr));//计算的是数组的总大小，单位是字节
	printf("%d\n", sizeof(arr[0]));//计算的是数组的总大小，单位是字节
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	return 0;
}