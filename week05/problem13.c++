#include <iostream>

using namespace std;

int main() {
    int arr[] = {3, 4, 1, 5, 8, 1, 7, 7, 3, 6, 9};
    int arr_length = sizeof(arr) / sizeof(arr[0]);
    int n;

    cin >> n;

    for (int i = 0; i < arr_length; i += n) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
