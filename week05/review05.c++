#include <iostream>

using namespace std;

int main() {
    char c;
    int arr[] = {4, 1, 2, 3, 5};

    cin >> c;

    if (c == 'a' || c == 'b' || c == 'c') {
        for (int i = 3; i >= 0; i--) {
            cout << arr[i] << " ";
        }
    } else {
        for (int i = 4; i >= 1; i--) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
