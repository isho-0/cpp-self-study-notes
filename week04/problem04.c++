#include <iostream>

using namespace std;

int main() {
    int size;
    int arr[5];

    cin >> size;

    size += 5;

    for (int i = 0; i < 5; i++) {
        arr[i] = size;
    }

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
