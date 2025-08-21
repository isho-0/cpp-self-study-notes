#include <iostream>

using namespace std;

int main() {
    int first_idx, second_idx, third_idx;
    int arr[6];

    cin >> first_idx >> second_idx >> third_idx;

    for (int i = 0; i < 6; i++) {
        arr[i] = 0;
        if (first_idx == i) {
            arr[i] = 1;
        } else if (second_idx == i) {
            arr[i] = 1;
        } else if (third_idx == i) {
            arr[i] = 1;
        }
    }

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
