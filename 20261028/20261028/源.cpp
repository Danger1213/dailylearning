#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>


//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	memcpy(arr2, arr1, 20);
//
//	for (int i = 0;i < sz2;i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//
//}
//
//
//void* my_memcpy(void* dest, void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//void* memmove(void* destination, const void* source, size_t num);
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	memcpy(arr2, arr1, 20);
//
//	for (int i = 0;i < sz2;i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//
//}
//
//
//void* my_memcpy(void* dest, void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//void* memmove(void* destination, const void* source, size_t num);



void* my_memmove(void* dest, void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
		if (dest < src)
		{
			//前往后
			while (num--)
			{
				*(char*)dest = *(char*)src;
				dest = (char*)dest + 1;
				src = (char*)src + 1;
			}
		}
		else
		{
			//后往前
			while (num--)
			{
				*((char*)dest + num) = *((char*)src + num);
			}
		}
		return ret;
}