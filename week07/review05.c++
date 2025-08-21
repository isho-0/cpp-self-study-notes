#include <iostream>

using namespace std;

int main() {
    char arr[3];
    int count = 0;

    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
        if (arr[i] >= 65 && arr[i] <= 90) {
            count++;
        }
    }

    if (count >= 3) {
        cout << "풍족하다" << endl;
    } else if (count >= 1 && count <= 2) {
        cout << "적절하다" << endl;
    } else {
        cout << "부족하다" << endl;
    }

    return 0;
}
