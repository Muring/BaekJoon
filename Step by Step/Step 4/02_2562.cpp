#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int arr[9];
    int max;

    for(int i = 0; i < 9; i++)
        cin >> arr[i];
    
    max = *max_element(arr, arr + 9);
    cout << max << endl;

    for(int i = 0; i < 9; i ++){
        if(max == arr[i])
            cout << i + 1;
    }

    return 0;
}