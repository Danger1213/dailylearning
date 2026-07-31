#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()                //一百以内三的倍数
//{
//	
//	for (int b = 1;b <= 100;b++)
//	{
//		if (b % 3 == 0)
//		{
//			printf("%d ", b);
//
//		}
//
//	}
//	printf("\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 23,5,88,11,1145,11451,114514,1919,810,67 };
//	int max = arr[0];
//	for (int i = 1;i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//
//
//	}
//	printf("max=%d", max);
//	return 0;
//
//}



//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0;i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//
//	for (int i = 1;i < 10;i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//
//	}
//	printf("max=%d", max);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	double sum = 0.0;
//	int flg = 1;
//	for (int i = 1;i < 100;i++)
//	{
//		sum = sum + 1.0 / i*flg;
//		flg = -flg;
//
//	}
//	printf("%f\n", sum);
//	return 0;
//
//}



#include<stdio.h>
int main()
{
	int count = 0;

	for (int i = 1;i <= 100;i++)
	{
		if (i % 10 == 9)
		{
			count++;

		}

		if (i / 10 == 9)
		{
			count++;
		}

	}

	printf("9的个数为%d\n", count);
	return 0;
	
}