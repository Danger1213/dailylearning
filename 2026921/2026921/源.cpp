#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//
//	}
//	for (i = 9;i >= 0;i--)
//	{
//		printf("%d ", arr[i]);
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//
//	int arr[10] = { 0 };
//	for (i = 0;i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//		sum = sum + arr[i];
//		
//	}
//	double ave = sum / 10.0;
//	printf("平均值为%lf\n", ave);
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int A[5] = { 1,2,3,4,5 };
//	int B[5] = { 6,7,8,9,10 };
//	int n = 5;
//	for (int i = 0;i < n;i++)
//	{
//		int tmp = 0;
//		tmp = A[i];
//		A[i] = B[i];
//		B[i] = tmp;
//
//	}
//	printf("数组A为：");
//	for (int i = 0;i < n;i++)
//	{
//		printf("%d ", A[i]);
//
//	}
//	printf("数组B为：");
//	for (int i = 0;i < n;i++)
//	{
//		printf("%d ", B[i]);
//
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int max = arr[0];
	int n = 10;
	for (int i = 0;i < n;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}

	}
	printf("%d", max);
	return 0;

}