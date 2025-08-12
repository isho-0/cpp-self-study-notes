#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    const int bc = b + c;

    if (a > bc) {
        cout << "MAX 발견" << endl;
    } else {
        cout << "MAX 아님" << endl;
    }

    return 0;
}
