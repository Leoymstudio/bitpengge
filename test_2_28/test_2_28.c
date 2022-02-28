#include <stdio.h>
#include <string.h>
//int main()
//{
//	//printf("c:\test\test.c");
//	//printf("ab\ncd");
//	//printf("(are you ok\?\?)");
//	/*printf("%c\n",'a');
//	printf("%c\n",'\'');
//	printf("%s\n","a");
//	printf("%s\n","\"");*/
//	//printf("c:\\test\\test.c");
//	//printf("\a\a");
//	printf("\v\v\v\v\v\v");
//	return 0;
//}




int main()
{
	printf("%c\n", '\130');
	//打印结果为X
	//八进制130-----→十进制88------→X的ASCII码值为88
	printf("%c\n", '\x30');
	//十六进制30→十进制48→ASCII为0
	printf("%d\n",strlen("c:\test\328\test"));

	return 0;
}