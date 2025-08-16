#include <iostream>

using namespace std;

int main() {
    const int SIZE = 6;
    int arr[SIZE];

    for(int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    cin >> arr[3];

    for(int i = 3; i < SIZE - 1; i++) {
        arr[i+1] = arr[i] + 1;
    }

    for(int i = 0; i < SIZE; i++) {
        cout << arr[i];
        if (i < SIZE - 1) cout << " ";
    }
    cout << endl;

    return 0;
}