#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		if (a % 2 == 1)
//		{
//			printf("%d 是奇数\n", a);
//		}
//
//		else
//		{
//			printf("%d 是偶数\n", a);
//		}
//	}
//	return 0;
//
//
//}
//#include<stdio.h>
//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		if (a >= 18)
//		{
//			printf("成年\n");
//
//		}
//		else
//		{
//			printf("未成年\n");
//
//		}
//
//
//	}
//
//	return 0;
//
//}
#include<stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		if (n >= 10)
		{
			printf("n >= 10\n");
		}
		else if (n >= 5 && n < 10)
		{
			printf("n >= 5 && n < 10\n");
		}
		else
		{
			printf("n < 5\n");
		}
	}
	return 0;
}
//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		printf("%d", a);
//		a++;
//
//	}
//
//	return 0;
	
		





//}