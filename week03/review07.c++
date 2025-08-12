#include <iostream>

using namespace std;

int main() {
    int a, x;

    cin >> a >> x;

    for (int i = x; i > 0; i--) {
        cout << --a << " ";
    }
    cout << endl;

    return 0;
}
