#include<iostream>
using namespace std;
int main()
{
	float x, y, z, q;
	cin >> x;
	if (x > 0 && x < 1)
	{
		y = 3 - x * 2;
		cout << y << endl;
	}
	else if (x >= 1 && x < 5)
	{
		z = 2 / 4 * x + 1;
		cout << z << endl;
	}
	else if (x >= 5 && x < 10)
	{
		q = x * x;
		cout << q << endl;
	}
	else
		cout << 0 << endl;
	return 0;
}