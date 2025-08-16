#include <iostream>

using namespace std;

void printChar(char c) {
    for (int i = 0; i < 3; i++) {
        cout << c;
    }
}

int main() {
    char in_char;

    cin >> in_char;

    printChar(in_char);

    return 0;
}
