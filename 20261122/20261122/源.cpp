#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	while (n < 1 || n > 30)
	{
		cout << "输入错误，请重新输入：" << endl;
		cin >> n;
	}
	
	int cur = 1;
	int sum = 0;
	cout << "三角形数的前[n]项为：" ;
	for (int i = 1;i <= n;i++)
	{
		if (i > 1)
		{
			cur = cur + i;
		}
		if (i > 1)
		{
			cout << " ";
		}
		cout << cur;
		sum = sum + cur;
	}
	cout << endl;
	
	cout << "三角形的前[n]项和为：" << sum << endl;

	return 0;
}