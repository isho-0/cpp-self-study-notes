#include <iostream>

using namespace std;

int SIZE = 5;

int main() {
  char c;
  char first_array[SIZE];
  char second_array[SIZE];

  cin >> c;

  for(int i = 0; i < SIZE; i++) {
    first_array[i] = c+i;
    second_array[i] = c-i;
  }

  for (int i = 0; i < SIZE; i++) {
    cout << first_array[i];
  }

  cout << endl;

  for (int i = 0; i < SIZE; i++) {
    cout << second_array[i];
  }

  cout << endl;

  return 0;
}