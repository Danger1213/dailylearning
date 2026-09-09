#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int score = 0;
//	printf("请输入成绩：");
//	scanf("%d", &score);
//	printf("成绩为：%d\n", score);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	float f = 0.0f;
//	int r = scanf("%d %d %f", &a, &b, &f);
//	printf("a=%d b=%d f=%f\n", a, b, f);
//	printf("r=%d\n", r);
//	return 0;
//
//
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数字：");
//	scanf("%d%d", &a, &b);
//	printf("%d %d", a / b, a % b);
//	return 0;
//
//
//
//}
#include<stdio.h>
int main()
{
	int M;
	while (scanf("%d", &M)!=EOF)
	{
		if (M % 5 == 0)
		{
			printf("YES");


		}

		else 
		{
			printf("NO");


		}



	}

	return 0;
}