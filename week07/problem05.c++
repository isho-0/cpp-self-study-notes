#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    if (n >= 80) {
        cout << "수" << endl;
    } else if (n >= 70) {
        cout << "우" << endl;
    } else if (n >= 60) {
        cout << "미" << endl;
    } else {
        cout << "재시도" << endl;
    }

    return 0;
}
