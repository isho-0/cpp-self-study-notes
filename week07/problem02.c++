#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    int sum = 0;

    cin >> a >> b;

    if (b > a) {
        swap(a, b);
    }

    sum = a - b;

    if (sum % 2 == 0) {
        cout << "짝사랑만" << endl;
    } else {
        cout << "고백한다" << endl;
    }

    return 0;
}
