#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);//��λȡ��
//	return 0;   
//int main()
//{
//	int a =3.14;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//	max = a > b ? a : b;
//	return 0;
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	int d = (a = b + 2, c = a - 1, d = c + 1);
//	printf("%d\n", d);
//	return 0;
//[]�±�����
//()�������ò�����
//�ֲ�����autoʡ��
typedef unsigned int u_int;//����������
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d", a);
//
//	
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
////static���ξֲ��������ı��˾ֲ���������������
extern int g_val;
int main()
{
	printf("%d", g_val);
	return 0;
}