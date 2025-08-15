#include <iostream>

using namespace std;

int main() {
    const int arr[] = {3, 1, 2, 5};

    int num;

    cin >> num;

    if (arr[num] > 2) {
        cout << "우와" << endl;
    } else {
        cout << "ㅠㅠ" << endl;
    }

    return 0;
}
