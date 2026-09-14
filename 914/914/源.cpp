//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	printf("请输入三个整数：");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//		//这样交换的话，a就比b大了
//	}
//
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//		//这样交换的话，a就大于c了，此时a最大
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//		//这样交换的话，b就大于c了，此时a>b>c
//
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//
//	int a = 0;
//	int b = 0;
//	int tmp = a%b;
//	printf("请输入两个数：");
//	scanf("%d %d",&a,&b);
//	while (b != 0)
//	{
//		tmp = a % b;
//		a = b;
//		b = tmp;
//
//
//	}
//	printf("%d", b);
//	return 0;
//
//
//}
#include<stdio.h>
int main()
{
	int a = 24;
	int b = 18;
	int c = a % b;
	while (c != 0)
	{
		a = b;
		b = c;
		c = a % b;

	}
	printf("%d", b);
	return 0;

}