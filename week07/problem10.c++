#include <iostream>

using namespace std;

void input(char c, char arr[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            arr[i][j] = c;
        }
    }
}

void output(char c, char arr[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
}

int main() {
    char c;
    char arr[4][4];

    cin >> c;

    input(c, arr);
    output(c, arr);

    return 0;
}
