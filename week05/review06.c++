#include <iostream>

using namespace std;

int main() {
    int a, b;
    int arr[] = {3, 5, 1, 2, 4, 6, 7};

    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
