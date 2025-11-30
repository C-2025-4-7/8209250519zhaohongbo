#include <iostream>
using namespace std;

int main() {
    double price = 0.8;
    int count = 2;
    int days = 0;
    double total_cost = 0.0;

    while (count <= 100) {
        total_cost += count * price;
        days++;
        cout << "第" << days << "天: " << count << "个, " << count * price << "元" << endl;
        count *= 2;
    }

    double average = total_cost / days;
    cout << "\n每天平均花费: " << average << "元" << endl;

    return 0;
}