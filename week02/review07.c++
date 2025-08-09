#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    const int avg = (a + b + c + d) / 4;

    if (a > avg) {
        cout << a << ">" << avg << endl;
    } else if (a < avg) {
        cout << a << "<" << avg << endl;
    } else {
        cout << a << "==" << avg << endl;
    }

    if (b > avg) {
        cout << b << ">" << avg << endl;
    } else if (b < avg) {
        cout << b << "<" << avg << endl;
    } else {
        cout << b << "==" << avg << endl;
    }

    if (c > avg) {
        cout << c << ">" << avg << endl;
    } else if (c < avg) {
        cout << c << "<" << avg << endl;
    } else {
        cout << c << "==" << avg << endl;
    }

    if (d > avg) {
        cout << d << ">" << avg << endl;
    } else if (d < avg) {
        cout << d << "<" << avg << endl;
    } else {
        cout << a << "==" << avg << endl;
    }

    return 0;
}
