#include <iostream>

using namespace std;

int main() {
    int n;

    cin >> n;

    if (n > 0) {
      cout << "###\n";
      cout << "###\n";
      cout << "###\n";
    } else if (n < 0) {
      cout << "$$$\n";
      cout << "$$$\n";
    }

    return 0;
}