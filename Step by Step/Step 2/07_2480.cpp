#include <iostream>

using namespace std;

int main(){
    int num1, num2, num3, reward;

    cin >> num1 >> num2 >> num3;

    if(num1 == num2 && num1 == num3)
        reward = 10000 + num1 * 1000;
    else if(num1 == num2 || num1 == num3)
        reward = 1000 + num1 * 100;
    else if(num2 == num3)
        reward = 1000 + num2 * 100;
    else
        reward = max(max(num1, num2), num3) * 100;

    cout << reward;

    return 0;
}