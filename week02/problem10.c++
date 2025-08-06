#include <iostream>

using namespace std;

int main() {
    int input;

    cin >> input;

    if (input > 3) {
        input++;
    } else {
        input--;
    }

    cout << input << endl;

    return 0;
}
