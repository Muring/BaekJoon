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

// find, replace �Լ� - string ���� �Լ�
// str.replace(���ڿ� ���� ��ġ, ġȯ�� ����, ġȯ�� ���ڿ�)
// �迭 ������ �� vector�� �����ϸ� �˾Ƽ� ������ ���缭 �Ҵ�