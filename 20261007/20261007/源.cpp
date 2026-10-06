#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("%d %d",a,b);
//	return 0;
//
//}
int NumberOf1(int n)
{
    int count = 0;
    while (n != 0)
    {

        n = n & (n - 1);
        count++;


    }
    return count;

}