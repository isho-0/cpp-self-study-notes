#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 1) {
            cout << "시작\n";
        }
        cout << i;
        if (i == 5) {
            cout << "\n종료\n";
        }
    }

    return 0;
}
