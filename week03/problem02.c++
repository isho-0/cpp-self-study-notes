#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    if (a > b) {
        cout << "큰 수는 " << a << endl;
    } else if (b > a) {
        cout << "큰 수는 " << b << endl;
    } else {
        cout << "같은 숫자" << endl;
    }

    return 0;
}
