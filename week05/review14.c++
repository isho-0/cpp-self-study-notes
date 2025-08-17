#include <iostream>

using namespace std;

int main() {
    int a, b;
    int arr[6] = {0};

    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        arr[i] = i;

        cout << arr[i];
    }

    cout << endl;

    return 0;
}
