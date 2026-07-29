#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int ret = 0;
//	for (int i = 0; i < 9;i++)
//	{
//		ret = ret ^ arr[i];
//
//	}
//
//	printf("%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4,5,1,2,3,4 };
//	int b = 0;
//	for (int i = 0;i < 9;i++)
//	{
//
//		b = b ^ a[i];
//
//	}
//	printf("%d\n", b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4,5,1,2,3,4 };
//	int b=0;
//	for (int i = 0;i < 9;i++)
//	{
//
//		b = b ^ a[i];
//
//	}
//	printf("%d\n", b);
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4,5,1,2,3,4 };
//	int b = 0;
//		for (int i = 0;i < 9;i++)
//		{
//			b = b ^ a[i];
//
//			
//	}
//		printf("%d\n", b);
//		return 0;
//
////}
//#include<stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4,5,1,2,3,4 };
//	int b = 0;
//	for (int i = 0; i < 9 ; i++)
//	{
//		b = b ^ a[i];
//
//	}
//	printf("%d\n", b);
//	return 0;
//
//}
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	printf("%d %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d\n", a, b);
	return 0;

}