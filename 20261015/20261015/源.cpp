#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int n;
	
	while (1)
	{
		cin >> n;
		if (n > 0)
		{
			break;
		}
		else
		{
			cout << "输入错误，请重新输入" << endl;
		}
	}
	int sum = 0;
	int num = 0;

	for (int i = 0;i < n;i++)
	{
		cin >> num;
		sum = sum + num;

	}
	
	double ave = double(sum)/n;

	cout << "这n个整数的总和:" << sum << endl << "这n个整数的平均值为:" << fixed << setprecision(2) << ave << endl;

	return 0;
}