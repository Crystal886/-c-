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
//	printf("�����:%d\n", ret);
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}
int main()
{
	int ans = 0;
	int ch = 0;
	printf("ע�⣡�������������λ���ش���������\n");
	printf("��ش�'yes'��ʼ�ش�:");
	ch = getchar();
	if(ch='yes')
	{
		printf("���������ţ��Դ��\n");
		printf("�ش�L/N����");
		int tep = 0;
		while ((tep = getchar()) != '\n')
		{
			;
		}
		ch = getchar();
		if (ch = 'L')
		{
			printf("????????????????????????????????\n");
			printf("�ش�������һ�λ��ᣬ���������ش�L/N����");
			while ((tep = getchar()) != '\n')
			{
				;
			}
			ch = getchar();
			if (ch = 'L')
			{
				char arr1[] = "�������ţ�ӳ����޵������һ��";
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
