#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char c;
	int english = 0, shuzi = 0, kong = 0, others = 0;
	while ((c = cin.get()) != '\n')
	{
		if (isalpha(c)) {
			english++;
		}
		else if (isdigit(c)) {
			shuzi++;
		}
		else if (isspace(c)) {
			kong++;
		}
		else {
			others++;
		}
	}
	cout << "字母：" << english << endl;
	cout << "数字：" << shuzi << endl;
	cout << "空格：" << kong << endl;
	cout << "其他：" << others << endl;
	return 0;
}