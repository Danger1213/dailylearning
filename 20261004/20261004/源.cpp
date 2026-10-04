#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int Fib(int n)
//{
//	if (n > 2)
//	{
//		return Fib(n - 1) + Fib(n - 2);
//
//	}
//	else
//		return 1;
//
//}
//
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fib(n);
//	printf("%d\n", r);
//	return 0;
//}
//#include<stdio.h>
//int Fib(int n)
//{
//	if (n > 2)
//	{
//		int a = 1;
//		int b = 1;
//		int c = 0;
//		for (int i = 3;i <= n;i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			
//		}
//		return c;
//	}
//	else
//		return 1;
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fib(n);
//	printf("%d\n", r);
//	return 0;
//}


//#include<stdio.h>
//
//int Func(int x,int y)
//{
//	if (y == 1)
//		return x;
//	else
//		return x * Func(x,y - 1);
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x,&y);
//	int r = Func(x,y);
//	printf("%d\n", r);
//	return 0;
//
//}
//#include<stdio.h>
//int Digitsum(int n)
//{
//	if (n / 10 == 0)
//	{
//		return n;
//
//	}
//	else
//	{
//		return (n % 10) + Digitsum(n / 10);
//
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Digitsum(n);
//	printf("%d", r);
//	return 0;
//
//}

//#include<stdio.h>
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}



#include<stdio.h>
void Print(int n)
{
	if (n > 9)
	{
		Print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Print(n);
	return 0;
}