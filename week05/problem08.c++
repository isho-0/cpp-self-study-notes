#include <iostream>

using namespace std;

int global_n;

void KFC() {
    cin >> global_n;
}

void BBQ(int local_n) {
    if (local_n > 5) {
        cout << "만세" << endl;
    } else {
        cout << "다시" << endl;
    }
}

int main() {
    KFC();
    BBQ(global_n);

    return 0;
}
