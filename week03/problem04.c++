#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    if (a == 7 && b == 9) {
        cout << "인증됨" << endl;
    } else {
        cout << "재시도" << endl;
    }

    return 0;
}
