#include <iostream>

using namespace std;

int main() {
    int n;
    char a[] = {'B', 'T', 'K', 'A'};
    int arr_length = sizeof(a) / sizeof(a[0]);

    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < arr_length; j++) {
            cout << a[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
