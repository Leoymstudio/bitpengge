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
	//printf("%d\n", b);//����������
	//int c = 0;
	//int d = c >> 1;
	//printf("%d\n", d);//���������ƣ�1����Ϊ0��0����Ϊ0��
	//int a = 10;
	//a = -a;
	//printf("%d\n",!a);
	//0���Ǽ٣���0�����棬��Ϊת�����
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
	printf("%d\n", sizeof(arr));//�������������ܴ�С����λ���ֽ�
	printf("%d\n", sizeof(arr[0]));//�������������ܴ�С����λ���ֽ�
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	return 0;
}