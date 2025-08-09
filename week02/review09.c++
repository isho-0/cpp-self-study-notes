#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    const int sum = a + b;
    const int div = a * b;

    if (sum > 10) {
        cout << "합만세" << endl;
    }
    if (div > 10) {
        cout << "곱만세" << endl;
    }

    return 0;
}
