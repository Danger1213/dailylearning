#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()            //while循环，在屏幕上打印1-10
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		printf("%d\n", a);
//		a = a + 1;
//
//	}
//	return 0;
//}
 
 
//#include<stdio.h>
//int main()              //输入一个正的整数，逆序打印这个整数的每一位
//                        //例：123  123%10=3   12%10=2   1%10=1    so printf: 3 2 1
//	                    // 123/10=12   12/10=1   1/10=0 
//                        
//{
//	int a;
//	scanf("%d", &a);
//	while (a != 0)
//	{
//		printf("%d ", a%10);
//		a = a / 10;
//
//	}
//	return 0;
//
//}


//#include<stdio.h>
//int main()                        //5的阶乘
//{
//	int a;
//	scanf("%d", &a);
//	int b = 1;
//	int c = 1;
//	while (b <= a)
//	{
//		c = c * b;
//		b++;
//
//	}
//	printf("%d\n", c);
//	return 0;
//}


//#include<stdio.h>
//int main()                         //for循环 打印1-10
//{
//	for (int i = 1;i <= 10;i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()                                  //100以内二的倍数相加求和
//{
//	int sum = 0;
//	for (int a = 1;a <= 100;a = a + 1)
//
//	{
//		if (a % 2 == 0)
//		{
//			sum = sum + a;
//
//		}
//		
//	}
//	printf("%d\n", sum);
//
//
//
//	
//
//
//	return 0;
//}
#include<stdio.h>
int main()
{   
	int a = 1;
	for (int b = 1;b <= 5;b = b + 1)
	{
		a = a * b;
	}
	printf("%d\n", a);
	return 0;
}