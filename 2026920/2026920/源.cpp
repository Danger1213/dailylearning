#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 9;i++)
//	{
//		int j = 0;
//		for (j = 1;j <= i;j++)
//		{
//
//			printf("%d*%d=%-2d ", j, i, j * i);
//
//		}
//
//		printf("\n");
//
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	for (int i = 1;i <= 100;i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//
//	}
//
//	printf("%d\n", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double sum = 0;
//	int flg = 1;
//	int i = 0;
//	for (i = 1;i <= 100;i++)
//	{
//		sum = sum + 1.0 / i *flg;
//		flg = -flg;
//
//
//	}
//	printf("%lf", sum);
//	return 0;
//
//}
//#include<Stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flg = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		sum = sum + 1.0 / i * flg;
//		flg = -flg;
//	}
//	printf("%fl\n", sum);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 10 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//
//		printf("%d是闰年", year);
//
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		int j = 0;
//		for (j = 2;j <= i - 1;j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if(i==j)
//		printf("%d是素数", i);
//
//	}
//
//
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double r = sqrt(1024);
//	printf("%lf", r);
//	return 0;
//
//
//}
//#include<stdio.h>
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//
//
//}
//#include<stdio.h>
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_leap_year(year) == 1)
//		printf("闰年\n");
//	else
//		printf("不是闰年\n");
//	return 0;
//
//
//
//
//}
//#include<stdio.h>
//int leap_year(int y)
//{
//	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//
//}
//
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (leap_year(year) == 1)
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//	return 0;
//
//}
//判断某年某月有多少天
//#include<stdio.h>
//int get_days_of_month(int y, int m)
//{
//
//
//
//}
//
//
//
//
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d %d", &year, &month);
//	int day = get_days_of_month(year, month);
//	
//	printf("%d\n", day);
//
//
//	return 0;
//
//}31 28 31 30 31 30 31 31 30 31 30 31
//      29
//#include<stdio.h>
//#include<stdbool.h>
//bool is_leap_year(int y)
//{
//	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//		return true;
//	else
//		return false;
//
//}
//
//int total_days(int y, int m)
//{
//	int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//
//	int d = days[m];
//
//	if (is_leap_year(y) && m == 2)
//	{
//		d += 1;
//	}
//	return d;
//
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d %d", &year, &month);
//	int day = total_days(year, month);
//	printf("%d\n", day);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		int j = 0;
//		for (j = 2;j <= i - 1;j++)
//		{
//			if (i % j == 0)
//				break;
//
//		}
//		if (i == j)
//			printf("%d是素数", i);
//
//	}
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("%d\n是闰年", year);
//	}
//	else
//		printf("%d\n不是是闰年", year);
//
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{    
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0;i < n;i++)
//		{
//			int j = 0;
//			for (j = 0;j < n;j++)
//			{
//				if (i == j || (i + j) == n - 1)
//					printf("*");
//				else
//					printf(" ");
//			}
//
//			printf("\n");
//		}
//
//
//
//	}
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0;i < n;i++)
//		{
//			int j = 0;
//			for (j = 0;j < n;j++)
//			{
//				if (i == 0 || i == (n - 1) || j == 0 || j == (n - 1))
//					printf("*");
//				else
//					printf(" ");
//
//
//
//			}
//
//
//			printf("\n");
//
//		}
//
//
//
//	}
//
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = 0;i < n;i++)
//		{
//			int j = 0;
//			for (j = 0;j < n;j++)
//			{
//				if (i == 0 || i == n - 1)
//					printf("* ");
//				else if (j == 0 || j == n - 1)
//					printf("* ");
//				else
//					printf("  ");
//
//			}
//			printf("\n");
//
//		}
//
//	}
//
//	return 0;
//
//}
#include<stdio.h>
int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	int arr[n][m];
	for(i=)


}