#include <iostream>

using namespace std;

int main() {
    int arr[2][4] = {0};
    int x, y;

    cin >> x >> y;

    arr[x][y] = 1;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
