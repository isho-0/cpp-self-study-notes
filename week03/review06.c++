#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    const int mul = a * b;

    if (mul > 30 && mul < 50) {
        cout << "적당한 사이즈" << endl;
    } else if (mul >= 50) {
        cout << "큰 사이즈" << endl;
    } else {
        cout << "작은 사이즈" << endl;
    }

    return 0;
}
