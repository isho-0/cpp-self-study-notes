#include <iostream>

using namespace std;

int main() {
    int n;
    int arr[] = {5, 4, 1, 2, 7, 8};

    int arr_length = sizeof(arr) / sizeof(arr[0]);

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = arr_length - 1; j >= 0; j--) {
            cout << arr[j] << " ";
        }

        cout << endl;
    }

    return 0;
}
