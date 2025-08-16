#include <iostream>

using namespace std;

void LOT() {
    for (int i = 1; i <= 5; i++) {
        cout << i;
    }

    cout << endl;
}

int main() {
    int n;

    cin >> n;

    for (int i = n; i > 0; i--) {
        LOT();
    }

    return 0;
}
