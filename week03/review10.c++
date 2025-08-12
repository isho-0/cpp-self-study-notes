#include <iostream>

using namespace std;

int main() {
    int n;
    int printNum = 1;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << printNum << " ";
        printNum += 2;
    }

    return 0;
}
