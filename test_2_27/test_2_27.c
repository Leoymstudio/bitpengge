#include <stdio.h>
#include <string.h>
int main()
{
	/*"abcdef";
	char arr[]="hello word";*/
	char arr1[] = "abc";
	char arr2[] = {'a','b','c'/*,'\0'*/};
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//int len = strlen("abc");
	//printf("%d\n", len);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
}