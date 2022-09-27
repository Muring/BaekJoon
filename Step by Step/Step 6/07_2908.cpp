#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1, str2, a, b;
    cin >> str1 >> str2;

    for(int i = 2; i >= 0; i--){
        a += str1[i];
        b += str2[i];
    }
    cout << max(a, b);
}