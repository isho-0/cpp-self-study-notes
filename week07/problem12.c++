#include <iostream>

using namespace std;

void BBQ(int &n) {
    if (n > 0 && n < 5) {
        cout << "초기값" << endl;
    } else if (n > 6 && n < 10) {
        cout << "중간값" << endl;
    } else {
        cout << "알 수 없는 값" << endl;
    }
}

int main() {
    int n;

    cin >> n;

    if (n == 3 || n == 7) {
        for (int i = 1; i <= 10; i++) {
            cout << i;
        }
    } else if (n == 0 || n == 8) {
        for (int i = 10; i >= 1; i--) {
            cout << i;
        }
    } else {
        BBQ(n);
    }

    return 0;
}
