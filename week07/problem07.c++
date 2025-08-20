#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    int max = 0;
    int min = 0;

    cin >> a >> b >> c;

    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }

    if (a <= b && a <= c) {
        min = a;
    } else if (b <= a && b <= c) {
        min = b;
    } else {
        min = c;
    }

    cout << "MAX = " << max << endl;
    cout << "MIN = " << min << endl;

    return 0;
}
