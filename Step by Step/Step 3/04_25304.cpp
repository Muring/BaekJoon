#include <iostream>

using namespace std;

int main(){
    int total, count, result = 0, a, b;

    cin >> total;
    cin >> count;

    for(int i = 0; i < count; i++){
        cin >> a >> b;
        result += a * b;
    }

    if(result == total)
        cout << "Yes";
    else
        cout << "No";
}