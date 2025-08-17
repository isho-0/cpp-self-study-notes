#include <iostream>

using namespace std;

int main() {
    int n;
    int arr[] = {3, 4, 1, 5, 8, 1, 7, 7, 3, 6, 9};

    cin >> n;

    for (int i = 0; i < 11; i += n) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
