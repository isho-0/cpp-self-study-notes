#include <iostream>

using namespace std;

int SIZE = 5;

int main() {
    int arr[SIZE];
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "합은 " << sum << "입니다." << endl;

    return 0;
}
