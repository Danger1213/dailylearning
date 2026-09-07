#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int len = strlen("abc");//strlen计算字符串的有效字符个数，不统计末尾\0
	printf("%d\n",len);
	return 0;


}