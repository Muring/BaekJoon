#include <iostream>
#include <string>
using namespace std;

int main(){
    int arr[26];
    fill_n(arr, 26, -1); // arr ���� -1�� �ʱ�ȭ

    string word;
    cin >> word;

    for(int i = 0; i < word.length(); i++){
        if(arr[(int)word[i] - 97] == -1)
            arr[word[i] - 97] = i;
    }
    
    for(int i = 0; i < 26; i++)
        cout << arr[i] << " ";
}