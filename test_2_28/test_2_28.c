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
	//��ӡ���ΪX
	//�˽���130-----��ʮ����88------��X��ASCII��ֵΪ88
	printf("%c\n", '\x30');
	//ʮ������30��ʮ����48��ASCIIΪ0
	printf("%d\n",strlen("c:\test\328\test"));

	return 0;
}