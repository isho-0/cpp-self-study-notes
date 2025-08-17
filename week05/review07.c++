#include <iostream>

using namespace std;

int main() {
    int n;
    int data[4];

    cin >> n;

    if (n == 10) {
        for (int i = 0; i < 4; i++) {
            data[i] = n--;

            cout << data[i] << endl;
        }
    }

    return 0;
}
