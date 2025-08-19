#include <iostream>

using namespace std;

int main() {
  char a, b;

  cin >> a >> b;

  cout << "문자 '" << a << "'의 아스키코드 값은 " << static_cast<int>(a) << endl;
  cout << "문자 '" << b << "'의 아스키코드 값은 " << static_cast<int>(b) << endl;

  return 0;
}