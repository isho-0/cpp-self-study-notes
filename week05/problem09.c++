#include <iostream>

using namespace std;

char arr[] = {'A', 'B', 'C'};
int arr_length = sizeof(arr) / sizeof(arr[0]);

void KFC(char arr[]) {
    for (int i = 0; i < arr_length; i++) {
        cout << arr[i];
    }

    cout << endl;
}

int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        KFC(arr);
    }

    return 0;
}
