#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int check_sys()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	if (check_sys() == 1)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}
//#include<stdio.h>
//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un un;
//	un.i = 1;
//	if (un.c == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}


#include<stdio.h>
union Un
{
	char c;
	int i;

};
int main()
{
	union Un un;
	un.i = 1;
	if (un.c == 1);
	printf("小端\n");
	return 0;
}
