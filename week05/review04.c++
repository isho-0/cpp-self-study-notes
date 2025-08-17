#include <iostream>

using namespace std;

void KFC(int arr[]) {
    for (int i = 0; i < 5; i++) {
        cout << arr[i];
    }
}

int main() {
    int n;
    int arr[5];

    cin >> n;

    for (int i = 0; i < 5; i++) {
        arr[i] = n--;
    }

    KFC(arr);

    return 0;
}
