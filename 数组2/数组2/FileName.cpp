#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	for (int i = 0;i < 5;i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = len - 1;
//	while (i < j)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = tmp;
//		i++;
//		j--;
//	}
//	for (int i = 0;i < len;i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0;i < len;i++);
//	{
//		arr[i] = arr[i] * 2
//
//	}
//
//	for (int i = 0;i < len;i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printf("原来: ");
//	for (int i = 0;i < len;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for (int i = 0;i < len;i++)
//	{
//		arr[i] = arr[i] * 2;
//
//
//	}
//	printf("之后: ");
//	for (int i = 0;i < len;i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = len - 1;
//	int key = 3;//要找的数字
//	int mid = 0;//记录中间元素的下标
//	int flg = 0;
//	while (left <= right)
//	{
//
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			flg = 1;
//			break;
//
//		}
//	}
//
//	if (1 == flg)
//	{
//		printf("找到了，下标是%d\n", mid);
//	}
//
//	else
//	{
//		printf("找不到\n");
//
//
//	}
//
//	return 0;
//
//}



//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int len  = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = len - 1;
//	int mid = 0;
//	int flg = 0;
//	int key = 3;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//
//		}
//		else if (arr[mid] < key)
//		{
//
//			left = mid + 1;
//
//		}
//		else
//		{
//			flg = 1;
//			break;
//
//		}
//
//	}
//
//	if (1 == flg)
//	{
//		printf("找到了，下标是%d\n", mid);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}