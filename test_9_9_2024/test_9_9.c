#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int num = 11;
//	if (num % 2 == 1)
//		printf("奇数\n");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i+=2)
//			printf(" %d", i);
//	return 0;
//}
int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	}
	return 0;
}