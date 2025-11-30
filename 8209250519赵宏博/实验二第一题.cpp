#include<iostream>
using namespace std;
int main()
{
	char ch1, ch2;
	cout << "ÊäÈëÒ»¸ö×Ö·û" << endl;
	cin >> ch1;
	if (ch1 >= 'a' && ch1 <= 'z')
	{
		ch2 = ch1 - 32;
		cout << ch2 << endl;
	}
	else
	{
		cout << ch1 + 1 << endl;
	}
	return 0;
}