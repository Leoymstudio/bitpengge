#include <stdio.h>
extern int g_val;
//int main()
//{
//	printf("1:%d\n", g_val);
//	printf("hehe\n");
//	{
//		int a = 10;
//	printf("%d\n", a);
//	printf("2:%d\n", g_val);
//	}
//	printf("3:%d\n", g_val);
//	return 0;
//}
int main()
{
	{
		int a = 1;
		printf("%d\n", a);
	}
	//局部变量生命周期为整个局部范围
	return 0;
}