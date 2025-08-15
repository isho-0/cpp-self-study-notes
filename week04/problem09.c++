#include <iostream>

using namespace std;

int main() {
    const int arr[] = {5, 2, 3, 4, 7};

    for (int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
