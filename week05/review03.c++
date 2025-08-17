#include <iostream>

using namespace std;

void PrintALL(int f_arr[], int s_arr[]) {
    for (int i = 0; i < 5; i++) {
        cout << f_arr[i];
    }

    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << s_arr[i];
    }
    cout << endl;
}

int main() {
    int a, b;

    int first_array[5];
    int second_array[5];

    cin >> a >> b;

    for (int i = 0; i < 5; i++) {
        first_array[i] = a;
        second_array[i] = b;
    }

    PrintALL(first_array, second_array);

    return 0;
}
