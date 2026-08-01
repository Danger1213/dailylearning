#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	for (int i = 0;i < 10;i++)
//	{
//		scanf("%d ",&arr[i]);
//	}
//	for (int i = 9;i >= 0;i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int arr[10];
//	for (int i = 0;i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//
//		
//	}
//	double avg = 0.0;
//	int sum = 0;
//	for (int i = 0;i < 10;i++)
//	{
//		sum = sum + arr[i];
//
//	}
//	avg = sum * 1.0 / 10;
//	printf("%f\n", avg);
//
//
//	return 0;
//}

#include<stdio.h>
int main()
{
	int a[] = { 1,2,3,4 };
	int b[] = { 5,6,7,8 };
	int len = sizeof(a) / sizeof(a[0]);
	printf("交换前的a:\n");
	for (int i = 0;i < len;i++)
	{
		printf("%d ", a[i]);

	}
	printf("\n");
	printf("交换前的b:\n");
	for (int i = 0;i < len;i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");


		for (int i = 0;i < len;i++)
		{
			int tmp = a[i];
			a[i] = b[i];
			b[i] = tmp;


		}

		printf("交换后的a数组:\n");
		for (int i = 0;i < len;i++)
		{
			printf("%d ", a[i]);
			

		}
		printf("\n");
		printf("交换后的b数组:\n");
		for (int i = 0;i < len;i++)
		{
			printf("%d ", b[i]);

		}
		return 0;
}