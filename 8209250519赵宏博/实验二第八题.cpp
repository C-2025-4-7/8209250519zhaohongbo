#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a;
    cout << "请输入一个正数 a: ";
    cin >> a;
    if (a < 0) {
        cout << "错误：不能对负数求平方根！" << endl;
        return 1;
    }
    double x0 = a / 2.0;  
    double x1 = 0.5 * (x0 + a / x0); 
    while (fabs(x1 - x0) >= 1e-5) {
        x0 = x1;
        x1 = 0.5 * (x0 + a / x0);
    }
    cout << a << " 的平方根是: " << x1 << endl;
    cout << "验证: " << x1 << " * " << x1 << " = " << x1 * x1 << endl;

    return 0;
}