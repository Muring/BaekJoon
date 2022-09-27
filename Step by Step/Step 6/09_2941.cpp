#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<string> arr = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
    string str;
    cin >> str;

    int idx;
    for(int i = 0; i < 8; i++){
        while(true){
            idx = str.find(arr[i]);

            if(idx == string::npos)
                break;
            
            str.replace(idx, arr[i].length(), "#");
        }
    }
    cout << str.length();
}

// find, replace 함수 - string 내장 함수
// str.replace(문자열 시작 위치, 치환할 길이, 치환할 문자열)
// 배열 선언할 때 vector로 선언하면 알아서 개수에 맞춰서 할당