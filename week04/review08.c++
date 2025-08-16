#include <iostream>

using namespace std;

int main() {
    int n;
    int arr[6];

    cin >> n;

    for (int i = 0; i < 6; i++) {
        arr[i] = n++;
        cout << arr[i] << endl;
    }

    return 0;
}
