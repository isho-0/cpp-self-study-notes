#include <iostream>

using namespace std;

int main() {
    int n;
    int first_arr[5] = {3, 5, 2, 4, 1};
    int second_arr[3][2] = {{9, 8}, {7, 1}, {3, 4}};

    cin >> n;

    if (n % 2 == 0) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 2; j++) {
                cout << second_arr[i][j];
            }
            cout << endl;
        }
    } else {
        for (int i = 0; i < 5; i++) {
            cout << first_arr[i] << " ";
        }
    }

    cout << endl;

    return 0;
}
