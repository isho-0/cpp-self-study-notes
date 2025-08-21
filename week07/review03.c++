#include <iostream>

using namespace std;

void input(char &a, char &b) {
    cin >> a >> b;
}

void output(char &a, char &b) {
    if (a >= 65 && a <= 90 && b >= 65 && b <= 90) {
        cout << "대문자들" << endl;
    } else if ((a >= 65 && a <= 90) || (b >= 65 && b <= 90)) {
        cout << "대소문자" << endl;
    } else {
        for (char i = 97; i <= 122; i++) {
            cout << i;
        }
        cout << endl;
    }
}


int main() {
    char a, b;

    input(a, b);
    output(a, b);

    return 0;
}
