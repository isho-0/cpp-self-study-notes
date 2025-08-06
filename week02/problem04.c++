#include <iostream>

using namespace std;

int main(){
    int a, b, c;

    cin >> a >> b >> c;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
          if(i == 0){
            cout << a;
          } else if(i == 1){
            cout << b;
          } else {
            cout << c;
          }
        }
        cout << endl;
    }
    return 0;
}