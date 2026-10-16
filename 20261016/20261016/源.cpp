#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//
//			}
//		}
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 3,1,2,5,4,6,7,9,8 };//对数组进行排序-升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int flag = 1;//假设这一趟已经有序
//		int j = 0;
//		for (j = 0;j < sz - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;//发⽣交换就说明，⽆序
//
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag == 1)//这⼀趟没交换就说明已经有序，后续⽆序排序了
//			break;
//	}
//}
//
//
//void print_arr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		cout << arr[i] << " " ;
//
//	}
//	cout << endl;
//
//}
//
//
//int main()
//{
//	int arr[] = { 3,4,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//void print_arr(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		cout << *(arr + i) << " ";
//
//	}
//}
//
//int main()
//{
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//
//	return 0;
//}

#include<iostream>
using namespace std;

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1;i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 0;j < sz - 1 - i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				flag = 0;
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
		flag == 1;
	}
}
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		cout << arr[i] << " ";
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, sz);
	print_arr(arr, sz);

	return 0;
}