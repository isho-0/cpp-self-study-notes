#include <iostream>

using namespace std;

int main() {
    char c;

    cin >> c;

    if (c >= 'a' && c <= 'z') {
        cout << "소문자 입력!!" << endl;
    } else if (c >= 'A' && c <= 'Z') {
        cout << "대문자 입력!!" << endl;
    } else if (c >= '0' && c <= '9') {
        cout << "숫자 문자 입력!!" << endl;
    }

    return 0;
}
