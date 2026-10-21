#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void FindKiller()
//{
//	char killer = 'a';
//	for (;killer <= 'd';killer++)
//	{
//		if (((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')) == 3)
//		{
//			printf("Ð×ÊÖÊÇ:%c\n", killer);
//			return;
//		}
//	}
//}
//
//int main()
//{
//	FindKiller();
//	return 0;
//}
#include<stdio.h>
void YangHui_Triangle(int arr[][4],int n)
{
	for (int i = 0;i < n;i++)
	{
		for(int j = 0;j<=i;j++)
			if (j == 0 || i == j)
			{
				arr[i][j] = 1;
			}
			else
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
	}
}

int main()
{
	int arr[][4] = { 0 };
	YangHui_Triangle(arr,4);
  
	return 0;
}