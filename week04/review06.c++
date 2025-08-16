#include <iostream>

using namespace std;

int main() {
    int arr[] = {3, 9, 12, 15, 55};

    int a, b, c;
    int sum = 0;

    cin >> a >> b >> c;

    sum = a + b + c;

    if (sum > 10) {
        cout << arr[4] << endl;
    } else {
        cout << arr[0] << endl;
    }

    return 0;
}
