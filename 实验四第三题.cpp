#include<iostream>
using namespace std;
int main()
{
	int count= 100;
	bool box[100] = { 0 };
	for (int student = 0; student < count; student++)
	{
		for (int lock = student; lock < count; lock += student)
			box[lock] = !box[lock];
	}
	cout << "开着的储物柜：" << endl;
		for (int i = 0; i < count; i++)
		{
			if (box[i])
			{
				cout << i << " ";
			}
		}
	return 0;
}