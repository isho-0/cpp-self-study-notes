#include <iostream>

using namespace std;

int main() {
    int arr[7];
    int sum = 0;

    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
    }

    sum = arr[0] + arr[1] + arr[2];

    cout << sum << endl;

    return 0;
}
