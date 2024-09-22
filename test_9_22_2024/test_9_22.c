#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char password[20] = { 0 };
	printf("请输入密码:");
	scanf("%s", password);
	printf("请确认密码(N/Y)：");
	int tep = 0;
	while ((tep = getchar()) !='\n')
	{
		;
	}
	int ch = getchar();
	if (ch == 'Y')
	{
		printf("确认成功");
	}
	else
		printf("密码错误");
	return 0;
}