#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 1;
	int n;
	scanf("%d", &n);
	for (int b = 1;b <= n;b = b + 1)
	{
		a = a * b;

	}
	printf("%d\n", a);
	return 0;
}