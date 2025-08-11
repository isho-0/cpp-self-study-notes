#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    for (int i = n; i >= 0; i--) {
        cout << i << endl;

        if (i == 0) {
            cout << "발사" << endl;
        }
    }

    return 0;
}
