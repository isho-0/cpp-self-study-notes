#include <iostream>

using namespace std;

void QTR() {
    cout << "QTR 100%" << endl;
}

void BBQ() {
    cout << "BBQ 100%" << endl;
}

int main() {
    int arr[3];
    int sum = 0;

    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum >= 10) {
        QTR();
    } else {
        BBQ();
    }

    return 0;
}
