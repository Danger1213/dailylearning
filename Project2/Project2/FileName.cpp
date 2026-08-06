#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int add(int m, int n)
//{
//	int sum = m + n;
//	return sum;
//
//
//}
//
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int ret = add(a, b);
//	printf("%d\n",ret);
//
//
//}


//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("交换前：a=%d,b=%d\n", a, b);
//	int tmp = a;
//	a = b;
//	b = tmp;
//	printf("交换后：a=%d,b=%d\n", a, b);
//	return 0;
//
//
//}






//void print_arr(int arr[], int len)
//{
//	for (int i = 0;i < len;i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//
//
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	/*for (int i = 0;i < len;i++)
//	{
//		printf("%d ", arr[i]);
//
//	}*/
//	print_arr(arr, len);
//	return 0;
//
//}


#include<stdio.h>
int fac(int n)
{
	int ret = 1;
	for (int i = 1;i <= n;i++)
	{
		ret = ret * i;



	}
	return ret;



}

int fac_sum(int n)          //嵌套调用
{
	int sum = 0;
	for (int i = 1;i <= n;i++)
	{
		sum = sum + fac(i);

	}

	return sum;

}

int main()
{
	int n = 5;
	int sum = fac_sum(n);
	printf("%d\n", sum);
	return 0;


}