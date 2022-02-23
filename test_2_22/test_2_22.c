#include<stdio.h>
//int main()
//{
//	double a = 10;
//	int b;
//	b = a/11;
//	printf("%d\n", b);
//		return 0;
//} 

//#define M 100
//int main()
//{
//	/*3.14;
//	10;
//	'a';
//	"abcdef";*/
//	//字面常量
//	//const int m = 10;
//	////m为常变量，不可被改变（const）
//	////m = 20;(改变无效）
//	//printf("m=%d\n", m);
//
//	//int arr[10] = { 0 };
//	//int n = 10;
//	//int arr2[n] = { 0 };//n本质为变量，不行
//	int n = M;
//	printf("n=%d\n", n);
//	return 0;
//
//}

enum Sex
{
	//这种枚举的未来变量的可能取值
//不赋值默认为0，1，2
	Male=3,
	Female=5,
	Secret

};

int main()
{
	//枚举常量：可以一一列举的常量
	enum Sex s = Male;
	/*Male=69；*///(erro
	printf("%d\n", Male);
	printf("%d\n", Female);
	printf("%d\n", Secret);
	return 0;
}