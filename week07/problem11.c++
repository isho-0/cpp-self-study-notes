#include <iostream>

using namespace std;

void input(int &n) {
    cin >> n;
}

void process(int &n, int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = n++;
        }
    }
}

void output(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    int arr[3][3];

    input(n);
    process(n, arr);
    output(arr);

    return 0;
}
