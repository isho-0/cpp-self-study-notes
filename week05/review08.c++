#include <iostream>

using namespace std;

void print_array(int arr[]) {
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int a, b;
    int arr[6];

    cin >> a >> b;

    for (int i = 0; i <= 2; i++) {
        arr[i] = a++;
    }

    for (int i = 5; i > 2; i--) {
        arr[i] = b--;
    }

    print_array(arr);

    return 0;
}
