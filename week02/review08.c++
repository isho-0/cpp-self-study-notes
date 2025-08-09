#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    const int gap = a - b;

    if (gap > 5) {
        cout << "멀다" << endl;
    } else {
        cout << "가깝다" << endl;
    }

    return 0;
}
