#include <iostream>

using namespace std;

char flag, a, b, c;

void input(char &input_a, char &input_b, char &input_c) {
    cin >> input_a >> input_b >> input_c;
}

void process(char input_a, char input_b, char input_c) {
    if (input_a == 'A' && input_b == 'B' && input_c == 'C') {
        flag = 1;
    }
}

void output(char output_flag) {
    if (output_flag == 1) {
        cout << "ABC를 찾았다." << endl;
    } else {
        cout << "못찾았다." << endl;
    }
}

int main() {
    input(a, b, c);
    process(a, b, c);
    output(flag);

    return 0;
}
