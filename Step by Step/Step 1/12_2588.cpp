#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int num1;
    char num2[4];

    cin >> num1;
    cin >> num2;

    for (int i = 2; i >= 0; i--)
        cout << num1 * (num2[i] - '0') << endl;
    cout << num1 * atoi(num2);
    
    return 0;
}