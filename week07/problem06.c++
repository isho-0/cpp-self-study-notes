#include <iostream>

using namespace std;

bool guessing_the_answer() {
    int n;

    cin >> n;

    if (n < 20) {
        cout << "더 큰 수를 입력하세요" << endl;
        return false;
    }

    if (n > 20) {
        cout << "더 작은 수를 입력하세요" << endl;
        return false;
    }

    cout << "정답입니다" << endl;
    return true;
}

int main() {
    for (int i = 0; i < 4; i++) {
        if (guessing_the_answer()) {
            break;
        }
    }

    return 0;
}
