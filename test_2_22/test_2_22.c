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
//	//���泣��
//	//const int m = 10;
//	////mΪ�����������ɱ��ı䣨const��
//	////m = 20;(�ı���Ч��
//	//printf("m=%d\n", m);
//
//	//int arr[10] = { 0 };
//	//int n = 10;
//	//int arr2[n] = { 0 };//n����Ϊ����������
//	int n = M;
//	printf("n=%d\n", n);
//	return 0;
//
//}

enum Sex
{
	//����ö�ٵ�δ�������Ŀ���ȡֵ
//����ֵĬ��Ϊ0��1��2
	Male=3,
	Female=5,
	Secret

};

int main()
{
	//ö�ٳ���������һһ�оٵĳ���
	enum Sex s = Male;
	/*Male=69��*///(erro
	printf("%d\n", Male);
	printf("%d\n", Female);
	printf("%d\n", Secret);
	return 0;
}