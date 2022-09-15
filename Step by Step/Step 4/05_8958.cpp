#include <iostream>

using namespace std;

int cal(string s){
    int sum = 0;
    int consec = 0;

    for(char v : s){
        if(v == 'O'){
            consec++;
            sum += consec;
        }
        else
            consec = 0;
    }
    return sum;
}

int main(){
    int n;

    cin >> n;

    string s;
    for(int i = 0; i < n; i++){
        cin >> s;

        cout << cal(s) << endl;
    }

    return 0;
}