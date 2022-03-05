#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int m = 5, n = 10;
//	char c2='A';
//	printf("%c\n", c2+32);
//	return 0;
//}


//选择语句
//int main()
//{
//	int input = 0;//输入的值
//	printf("加入比特：>\n");
//	printf("那要好好学习吗(1/0)?>:");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//}

//
//循环语句
int main()
{
	int line = 0;
	while(line<30000)
	{
		printf("写代码:%d\n",line);
	line++;
	}
	if (line = 30000)
	{
	printf("好offer\n");

	}
	return 0;

}


Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	//int sum = num1 + num2;
//	//函数方式解决
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char ch[5] = { 'a','b','c' };//不完全初始化，剩余的默认为0
//	int i = 0;
//	while (i<10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}
//
