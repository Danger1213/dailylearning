#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()                                //九九乘法表
//{
//	for (int i = 1;i <= 9;i++)
//	{
//		for (int j = 1;j <= i;j++)
//		{
//			printf("%d*%d=%2d ",j,i,i*j);
//
//		}
//		printf("\n");
//	}
//	return 0;
//}
#include<stdio.h>
int main()                                  //÷100以内第一个三的倍数
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			printf("%d\n", i);
			break;

		}

		i++;

	}
	return 0;
}