#include <iostream>

using namespace std;

int main(){
    int hour, min, res_hour, res_min;

    cin >> hour >> min;

    res_min = min - 45;
    if(res_min < 0){
        res_min = 60 + res_min;

        res_hour = hour - 1;
        if(res_hour < 0)
            res_hour = 24 + res_hour;
    }
    else
        res_hour = hour;
    cout << res_hour << " " << res_min;

    return 0;
}