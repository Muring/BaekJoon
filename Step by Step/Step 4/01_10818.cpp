#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, i;

    cin >> n;

    int* arr = new int[n];
    for(i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr + n);

    cout << arr[0] << " " << arr[n - 1];

    delete [] arr;
    return 0;
}

// int main(){
//     int n, MaxVal, MinVal, input;

//     MaxVal = -1000001;
//     MinVal = 1000001;

//     for(int i = 0; i < n; i ++){
//         cin >> input;

//         if(input > MaxVal)
//             MaxVal = input;
        
//         if(input < MinVal)
//             MinVal = input;
//     }

//     cout << MinVal << " " << MaxVal;
//     return 0;
// }