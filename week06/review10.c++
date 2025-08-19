#include <iostream>

using namespace std;

int main() {
    char arr[3];

    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
        if (!(arr[i] >= 'A' && arr[i] <= 'Z')) {
            cout << "대문자가 아닌 문자 입력" << endl;
            return 0;
        }
    }

    if (arr[0] <= arr[1] && arr[0] <= arr[2]) {
        cout << "옳지 않음" << endl;
    } else {
        cout << "옳다" << arr[0] << endl;
    }

    return 0;
}
