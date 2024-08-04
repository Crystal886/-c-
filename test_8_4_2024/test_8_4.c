#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define ADD(X,Y) ((X)+(Y))
//int main()
//{
//	printf("%d\n", 5 * ADD(2, 3));
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	printf("%p", &a);
//	return 0;
// }
//int main()
//{
//	int* s = &a;
//	*s = 20;
//	printf("%d", a);//解引用，通过pa里面的地址，找到a
//	return 0;
//}//
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	return 0;
//}
struct Stu
{
	char name[20];
	int age;
	double score;
};
int main()
{
	int a = 0;
	printf("%d\n", a);
	struct Stu s={"bro",20,19.5 };
	printf("%s,%d,%lf\n", s.name, s.age, s.score);
	struct Stu* ps = &s;
	printf("%s,%d,%lf\n", ps->name, ps->age, ps->score);
	return 0;
}