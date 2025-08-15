#include <iostream>

using namespace std;

int main() {
    int arr[] = {5, 25, 54, 2, -33, 57, 57, 82, -8, 13, 1};
    int array_length = sizeof(arr) / sizeof(arr[0]);
    int idx;

    cin >> idx;

    for (int i = idx; i < array_length; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
