#include <iostream>

using namespace std;

int main() {
    char input;

    cin >> input;

    if (input >= '0' && input <= '9') {
        int num = input - '0';
        cout << num + 5 << endl;
    }

    return 0;
}
