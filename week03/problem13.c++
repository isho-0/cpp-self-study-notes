#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    const int sum = a + b + c;
    const int div = a * b * c;

    if (sum > 10) {
        cout << div << endl;
    } else {
        cout << "0" << endl;
    }

    return 0;
}
