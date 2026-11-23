#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int n;
char a, b, c;
//x柱子上有n个盘子，需要借助y的帮助，转移到z上
void hanoi(int n, char x, char y, char z)
{
	if (n == 0)
		return;
	hanoi(n - 1, x, z, y);
	printf("%c->%d->%c\n", x, n, z);
	hanoi(n - 1, y, x, z);
}

int main()
{
	cin >> n >> a >> b >> c;

	hanoi(n, a, c, b);
	return 0;
}