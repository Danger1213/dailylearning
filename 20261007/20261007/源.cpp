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
//int NumberOf1(int n)
//{
//    int count = 0;
//    while (n != 0)
//    {
//
//        n = n & (n - 1);
//        count++;
//
//
//    }
//    return count;
//
//}
//#include<stdio.h>
//#include<string.h>
//
//size_t my_strlen(char* p)
//{
//	char* start = p;
//	while (*p != '\0')
//		p++;
//	return p - start;
//
//
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//
//	size_t len = my_strlen(arr);
//	printf("%zu\n", len);
//
//
//
//	return 0;
//
//}


//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	while (p < &arr[10])
//	{
//		printf("%d ", *p);
//		p++;
//
//	}
//    
//	return 0;
//}


#include<stdio.h>
int main()
{
	const int n = 10;
	int* p = &n;
	*p = 100;
	printf("%d ", n);




	return 0;
}