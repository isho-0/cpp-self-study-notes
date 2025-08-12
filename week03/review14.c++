#include <iostream>

using namespace std;

int main() {
    int id, pw;

    cin >> id >> pw;

    if (id != 1111) {
        cout << "아이디가 틀렸습니다" << endl;
    } else if (pw != 2222) {
        cout << "비밀번호가 틀렸습니다" << endl;
    } else {
        cout << "로그인 성공" << endl;
    }

    return 0;
}
