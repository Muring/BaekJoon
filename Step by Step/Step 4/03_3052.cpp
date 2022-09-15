#include <iostream>

using namespace std;

int main(){
    int count[42] = {};
    int input;

    for(int i = 0; i < 10; i++){    
        cin >> input;

        count[input % 42]++;
    }

    int result = 0;
    
    for(int j : count){
        if(j > 0)
            result++;
    }

    cout << result;

    return 0;
}