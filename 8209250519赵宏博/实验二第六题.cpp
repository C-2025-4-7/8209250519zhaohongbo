#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int oa = a, ob = b;
	while (b != 0)//Õ·×ªÏà³ý·¨
	{
		int x = b;
		b = a % b;
		a = x;
	}
	int max = a;
	int min = oa * ob / max;
	cout << max << endl;
	cout << min << endl;
	return 0;
}