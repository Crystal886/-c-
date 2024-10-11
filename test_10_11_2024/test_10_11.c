#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
//int main()
//{
//	int n = 0;
//	int sum = 1;
//	int i = 0;
//	int ret = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		sum = 1;
//		for (n=i; n > 0; n--)
//		{
//			sum = sum * n;
//		}
//		ret += sum;
//	}
//	printf("结果是:%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int i, n, ret=0, sum = 1;
//	scanf("%d", &i);
//	for (n = 1; n <= i;n++)
//	{
//		sum *= n;
//		ret += sum;
//	}
//	printf("%d", ret);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}
int main()
{
	int ans = 0;
	int ch = 0;
	printf("注意！！！您将有两次机会回答下列问题\n");
	printf("请回答'yes'开始回答:");
	ch = getchar();
	if(ch='yes')
	{
		printf("李贵坤大还是牛梓源大\n");
		printf("回答（L/N）：");
		int tep = 0;
		while ((tep = getchar()) != '\n')
		{
			;
		}
		ch = getchar();
		if (ch = 'L')
		{
			printf("????????????????????????????????\n");
			printf("回答错误，最后一次机会，请您谨慎回答（L/N）：");
			while ((tep = getchar()) != '\n')
			{
				;
			}
			ch = getchar();
			if (ch = 'L')
			{
				char arr1[] = "李贵坤的牛子超级无敌宇宙第一大";
				char arr2[] = "******************************";
				int left = 0;
				int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
				while (left <= right)
				{
					arr2[left] = arr1[left];
					arr2[right] = arr1[right];
					printf("%s\n", arr2);
					Sleep(100);
					system("cls");
					left++;
					right--;
				}
				printf("%s\n", arr2);
			}
		}
	}
	return 0;
}
