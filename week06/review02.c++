#include <iostream>

using namespace std;

int main() {
    char c;

    cin >> c;

    for (int i = c; i >= 97; i--) {
        cout << static_cast<char>(i);
    }

    cout << endl;

    return 0;
}
