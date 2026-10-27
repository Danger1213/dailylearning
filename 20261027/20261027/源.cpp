#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "Danger@change.world";
	//Danger\0change\0world\0
	const char* p = "@.";//分隔符的集合
	char buf[30] = { 0 };
	strncpy(buf, arr, 30);// 拷贝一份到buf，保护原arr不被strtok修改
	char* pr = NULL;
	for (pr = strtok(buf, p);pr != NULL;pr = strtok(NULL, p))
	{
		printf("%s\n", pr);
	}
	return 0;
}