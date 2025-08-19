#include <iostream>

using namespace std;

int main() {
    char first_arr[5];
    char second_arr[5];

    for (int i = 0; i < 5; i++) {
        cin >> first_arr[i];
        second_arr[i] = first_arr[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << first_arr[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 5; i++) {
        cout << second_arr[i] << " ";
    }

    cout << endl;

    return 0;
}
