#include <iostream>

using namespace std;

int main(){
    int init, N;
    int count = 0;

    cin >> init;
    N = init;

    do{
        N = (N % 10) * 10 + ((N / 10) + (N % 10)) % 10;

        count++;
    } while(N != init);
    
    cout << count;
    return 0;
}