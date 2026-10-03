#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void Print(size_t n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//    }
//	printf("%zu ", n % 10);
//
//}
//
//int main()
//{
//	size_t num = 0;
//	scanf("%d", &num);
//	Print(num);
//	return 0;
//
//
//}
#include<stdio.h>
void Print(size_t n)
{
	if (n > 9)
	{
		Print(n / 10);

	}
	printf("%zu ", n % 10);

}


int main()
{
	size_t num = 0;
	scanf("%zu", &num);
	Print(num);
	return 0;
}