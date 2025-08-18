#include <iostream>

using namespace std;

int main() {
    char c[] = {'$', '@', 'D', 'A', '9', '#'};

    for (int i = 0; i <= 5; i++) {
        cout << c[i] << " : " << static_cast<int>(c[i]) << endl;
    }

    return 0;
}
