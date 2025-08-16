#include <iostream>

using namespace std;

void printKFC() {
    cout << "KFC" << endl;
}

void printMC() {
    cout << "MC" << endl;
}

int main() {
    int n;

    cin >> n;

    if (n == 1) {
        printKFC();
    }
    if (n == 2) {
        printMC();
    }

    return 0;
}
