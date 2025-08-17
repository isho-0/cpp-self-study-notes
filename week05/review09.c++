#include <iostream>

using namespace std;

int main() {
    int a, a_plus;
    int arr[5];

    cin >> a >> a_plus;

    for (int i = 0; i < 5; i++) {
        arr[i] = a;
        a += a_plus;

        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
