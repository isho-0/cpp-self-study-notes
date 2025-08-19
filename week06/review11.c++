#include <iostream>

using namespace std;

int main() {
    char a, b;

    cin >> a >> b;

    if (a >= b) {
        cout << "입력되는 첫 번째 문자가 두 번째 문자보다 더 뒤에 있는 문자입니다." << endl;
        return 0;
    }
    cout << b - a << endl;

    return 0;
}
