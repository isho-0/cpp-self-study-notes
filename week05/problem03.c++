#include <iostream>

using namespace std;

void printArray(int n) {
    char arr[3] = {'m', 'i', 'n'};

    cout << arr[n] << endl;
}

int main() {
    int n;

    cin >> n;

    printArray(n);

    return 0;
}
