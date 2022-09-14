#include <iostream>

using namespace std;

int main(){
    int n, x, i;

    cin >> n >> x;
    
    int* arr = new int[n];

    for(i = 0; i < n; i++)
        cin >> arr[i];
    
    for(i = 0; i < n; i++){
        if(arr[i] < x)
            cout << arr[i] << " ";
    }

    delete [] arr;
    return 0;
}