#include <iostream>

using namespace std;

const int SIZE = 6;

void print_all(int arr[]) {
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    int n;
    int arr[SIZE];

    cin >> n;

    for (int i = 0; i < SIZE; i++) {
        arr[i] = n++;
    }

    print_all(arr);

    return 0;
}
