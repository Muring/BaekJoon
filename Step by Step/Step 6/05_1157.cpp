#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string word;
    cin >> word;
    int arr[26] = {};

    for(int i = 0; i < word.length(); i++){
        word[i] = toupper(word[i]);
        arr[(int)word[i] - 65] += 1;
    }

    int max = *max_element(arr, arr + 26);

    int count = 0;
    int flag;
    for(int i = 0; i < 26; i++){
        if(max == arr[i]){
            count++;
            flag = i;
        }   
    }

    if(count == 1)
        cout << (char)(flag + 65);
    else
        cout << "?";
}   