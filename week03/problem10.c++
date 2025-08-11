#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    const int magic = (20 + (n * 2)) / 5;

    if (magic != 100) {
        cout << "Magic" << endl;
    }

    return 0;
}
