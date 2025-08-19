#include <iostream>

using namespace std;

int main() {
    char arr[5];
    int count = 0;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        if (arr[i] >= '0' && arr[i] <= '9') {
            count++;
        }
    }

    if (count >= 1) {
        cout << "숫자 " << count << "개 발견" << endl;
    } else {
        cout << "숫자 미발견" << endl;
    }

    return 0;
}
