#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    const int sum = a + b + c;
    const int mult = a * b * c;

    if (sum >= mult) {
        cout << "행운의 수" << endl;
    } else {
        cout << "소소한 수" << endl;
    }

    return 0;
}