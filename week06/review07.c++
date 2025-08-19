#include <iostream>

using namespace std;

int main() {
    char a, b;

    cin >> a >> b;

    if (a >= 'A' && a <= 'Z') {
        a = a + 32;
    } else if (a >= 'a' && a <= 'z') {
        a = a - 32;
    }

    if (b >= 'A' && b <= 'Z') {
        b = b + 32;
    } else if (b >= 'a' && b <= 'z') {
        b = b - 32;
    }

    cout << a << " " << b << endl;

    return 0;
}
