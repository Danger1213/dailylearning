#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//	char arr[] = "Danger Change The World";
//	int i = 0;
//	while (arr[i])
//	{
//		if (islower(arr[i]))
//		{
//			arr[i] -= 32;
//		}
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//
////int main()
////{
//	char arr1[10] = { 0 };
//	char arr2[] = "hello";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

#include<stdio.h>
#include<assert.h>
//1.参数顺序
//2.函数的功能，停⽌条件
//3.assert
//4.const修饰指针
//5.函数返回值
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	
//	while ((*dest++ = *src++))//先使用再++，简化代码
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[100] = { 0 };
//	char arr2[] = "Danger change the world!";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//size_t strlen(const char* str);

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	const char* str = "Danger";
//	printf("%zd\n", strlen(str));
//	return 0;
//}

//计算器方式
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str);
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
////递归的方式
//int my_strlen(const char* str)
//{
//	assert(str);
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//
////指针-指针的方式
//int my_strlen(char* s)
//{
//	assert(s);
//	char* p = s;
//	while(*p != '\0')
//		p++;
//	return p - s;
//}
//
//int my_strlen(char* s)
//{
//	assert(s);
//	char* p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}
//实现strlen

//#include<stdio.h>

//#include<assert.h>
//int my_strlen(char* s)
//{
//	assert(s);
//	char* p = s;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - s;
//}
//int main()
//{
//	char str[] = "Danger";
//	int len = my_strlen(str);
//	printf("%d\n", len);
//	return 0;
//}


//#include<stdio.h>

//#include<assert.h>
//int my_strlen(char* s)
//{
//	assert(s);
//	char* p = s;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - s;
//}
//int main()
//{
//	char str[] = "Danger";
//	int len = my_strlen(str);
//	printf("%d\n", len);
//	return 0;
//}

//实现strcpy
//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while ((*dest++ = *src++))
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[10] = { 0 };
//	char arr2[] = "world";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//

#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* dest, char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while (*dest++ = *src++)
	{
		;
	}
	return ret;

}

int main()
{
	char arr1[10] = { 0 };
	char arr2[] = "Danger";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);

	return 0;
}