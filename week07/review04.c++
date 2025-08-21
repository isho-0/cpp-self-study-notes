#include <iostream>

using namespace std;

void output(char arr[3][5]) {
    int x, y;

    cin >> x >> y;

    cout << arr[x][y] << endl;
}

int main() {
    char c;
    char arr[3][5];

    cin >> c;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][j] = c++;
        }
    }

    output(arr);

    return 0;
}
