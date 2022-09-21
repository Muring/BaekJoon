#include <iostream>
using namespace std;

int arithmetic_sequence(int num){
    int count = 0;

    if(num < 100)
        return num;
    else{
        count = 99;

        for(int i = 100; i <= num; i++){
            int hun = i / 100;
            int ten = i / 10 % 10;
            int one = i % 10;

            if(hun - ten == ten - one)
                count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin >> n;

    int result = arithmetic_sequence(n);
    cout << result;
    return 0;
}