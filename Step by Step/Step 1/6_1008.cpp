#include <iostream>

using namespace std;

int main(){
    int num1, num2;

    cin >> num1 >> num2;
    cout.precision(10);
    cout << num1 / (double)num2;

    return 0;
}