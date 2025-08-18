#include <iostream>

using namespace std;

int main() {
    char c;

    cin >> c;

    if (c >= 65 && c <= 90) {
        cout << "대문자입니다." << endl;
    } else if (c >= 97 && c <= 122) {
        cout << "소문자입니다." << endl;
    }

    return 0;
}
