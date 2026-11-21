#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	double price = 0;
//	int discount = 0;
//	cin >> price;
//	cin >> discount;
//
//	if (price > 0 && (discount > 1 && discount < 100))
//	{
//		cout << "应付金额：" << fixed << setprecision(2) << price * (discount / 100.0) << "元" << endl;
//	}
//	else
//		cout << "输入错误" << endl;
//
//	return 0;
//}



//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	double c = 0.0;
//	cin >> c;
//	double F = c * 9 / 5.0 + 32;
//	double K = c + 273.15;
//
//	cout << fixed << setprecision(2);
//	cout << "华氏温度：" << F << endl;
//	cout << "开氏温度：" << K << endl;
//
//	return 0;
//
//}


#include<iostream>
using namespace std;

int main()
{
	int score = 0;
	
	while (1) {
		cin >> score;
		if (score >= 0 && score <= 100)
		{
			if (score >= 90)
			{
				cout << "A" << endl;
			}

			else if (score >= 80)
			{
				cout << "B" << endl;
			}

			else if (score >= 70)
			{
				cout << "C" << endl;
			}

			else if (score >= 60)
			{
				cout << "D" << endl;
			}

			else
			{
				cout << "E" << endl;
			}
		}

		else
			cout << "输入错误" << endl;
	}
	return 0;
}