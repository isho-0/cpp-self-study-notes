#include <iostream>

using namespace std;

void ABC(char &a, char &b) {
    cin >> a >> b;
}

void OUTPUT(char print_a, char print_b) {
    cout << print_a << " " << print_b << endl;
}

int main() {
    char a, b;

    ABC(a, b);
    OUTPUT(a, b);

    return 0;
}
