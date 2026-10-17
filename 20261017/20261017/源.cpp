#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//size_t my_strlen(const char* str)
//{
//	size_t count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char str[] = "danger";
//
//	cout << "长度：" << my_strlen(str);
//	return 0;
//
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//void left_round(char str[], int k)//k是左旋字符的个数
//{
//	int len = strlen(str);
//	int time = k % len;
//	int i = 0;//左旋次数
//	int j = 0;//下标
//	for (i = 0;i < time;i++)
//	{
//		char tmp = str[0];
//		for (j = 0;j < len - 1;j++)
//		{
//			str[j] = str[j + 1];
//		}
//		str[j] = tmp;
//	}
//}
//
//int main()
//{
//	char str[] = "abcd";
//	left_round(str, 2);
//	cout << "左旋得到：" << str;
//	return 0;
//}



#include<iostream>
#include<string>
using namespace std;
void left_round(char str[], int k)
{
	int len = strlen(str);
	int time = k % len;
	int i = 0;
	int j = 0;
	for (i = 0;i < time;i++)
	{
		char tmp = str[0];
		for (j = 0;j < len - 1;j++)
		{
			str[j] = str[j + 1];
		}
		str[j] = tmp;

	}

}

int main()
{
	char str[] = "abcd";
	left_round(str, 2);
	cout << "左旋得：" << str;
	return 0;
}