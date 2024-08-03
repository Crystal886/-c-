#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);//按位取反
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
//[]下标引用
//()函数调用操作符
//局部变量auto省略
typedef unsigned int u_int;//类型重命名
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
////static修饰局部变量，改变了局部变量的生命周期
extern int g_val;
int main()
{
	printf("%d", g_val);
	return 0;
}