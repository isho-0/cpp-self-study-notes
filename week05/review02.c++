#include <iostream>

using namespace std;

void KFC() {
    cout << "KFC" << endl;
}

void BBQ() {
    cout << "BBQ" << endl;
}

int main() {
    char c;

    cin >> c;

    if (c == 'B') {
        KFC();
        BBQ();
    } else if (c == 'b') {
        BBQ();
    } else if (c == '7') {
        KFC();
    }

    return 0;
}
