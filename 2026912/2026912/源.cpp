#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int i = 2;
//	int j = 4;
//	int k = 3;
//	if (i<j&&j<k)
//		printf("Danger change world");
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int age = 0;
//	printf("请输入年龄：");
//	scanf("%d", &age);
//	if (age > 18 && age < 36)
//		printf("青年");
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//
//	b = (a > 5 ? 3 : -3);
//	printf("%d\n", b);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = 0;
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//
//	max = (a > b ? a : b);
//
//
//	printf("%d\n", max);
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//		printf("春天\n");
//	return 0;
//
//
//}
//#include<stdio.h>
//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 12 || month == 1 || month == 2)
//		printf("冬天");
//	return 0;
//
//
//}
#include<stdio.h>
int main()
{
	int year = 0;
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || (year % 400 == 0))
		printf("闰年");
	else
		printf("平年");
	return 0;

}