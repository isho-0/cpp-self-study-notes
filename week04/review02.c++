#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    if (n != 3) {
        cout << "3이 아니다" << endl;
    }
    if (n != 5) {
        cout << "5가 아니다" << endl;
    }
    if (n > 1 && n < 10) {
        for (int i = 5; i > 0; i--) {
            cout << i << endl;
        }
    }

    return 0;
}
