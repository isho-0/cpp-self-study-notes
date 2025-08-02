#include <iostream>

using namespace std;

int main(){
    int a = 8;
    int result = 1;

    for(int i = 1; i <= 5; i++){
        result *= a;
    }
    cout << result << endl;

    return 0;
}