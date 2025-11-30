#include<iostream>
#include<string>
#include<limits>
using namespace std;
double yunsuan(double num1, char suan, double num2);
int main()
{
	while (true)
	{
		double num1, num2;char suan;
		cin >> num1 >> suan >> num2;
		double result = yunsuan(num1, suan, num2);
		if (!isnan(result))
		{
			cout << num1 << suan << num2 << "=" << result << endl;
		}
	}
	return 0;
}
double yunsuan(double num1, char suan, double num2)
{
	switch (suan)
	{
	case'+':
		return num1 + num2;
	case '-':
		return num1 - num2;
	case'*':
		return num1 * num2;
	case'/':
		if (num2 == 0)
		{
			cout << "错误！除数不为0！" << endl;
			return numeric_limits<double>::quiet_NaN();
		}
		return num1 / num2;
	case'%':
		if (num2 == 0)
		{
			cout << "除数不为0！" << endl;
			return numeric_limits<double>::quiet_NaN();
		}
		if (num1 != static_cast<int>(num1) || num2 != static_cast<int>(num2))
		{
			cout << "错误！取模运算必须为整数！" << endl;
			return numeric_limits<double>::quiet_NaN();
		}
		return static_cast<int>(num1) % static_cast<int>(num2);
	default:
		cout << "错误运算符号" << suan << "'" << endl;
		return numeric_limits<double>::quiet_NaN();
	}
}