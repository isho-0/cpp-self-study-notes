#include <iostream>

using namespace std;

int SIZE = 6;

int main() {
    int n, n_plus = 0;
    int arr[SIZE];

    cin >> n;
    n_plus = n;

    for (int i = 0; i < SIZE; i++) {
        arr[i] = n;
        n += n_plus;

        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
