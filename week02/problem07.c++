#include <iostream>

using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    if (a > b) {
        cout << "a가 b보다 크다" << endl;
    } else {
        cout << "b가 a보다 크거나 같다" << endl;
    }

    return 0;
}
