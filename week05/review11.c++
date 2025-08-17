#include <iostream>

using namespace std;

int SIZE = 6;

int main() {
    int n;
    int arr[SIZE];

    for (int i = 0; i <= 2; i++) {
        cin >> arr[i];
    }

    cin >> n;

    for (int i = 3; i < SIZE; i++) {
        arr[i] = n++;
    }

    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
