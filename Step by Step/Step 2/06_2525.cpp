#include <iostream>

using namespace std;

int main(){
    int hour, min, time, t_hour, t_min, res_hour = 0, res_min;

    cin >> hour >> min;
    cin >> time;

    t_hour = time / 60;
    t_min = time % 60;

    res_min = min + t_min;
    if(res_min >= 60){
        res_hour = res_min / 60;
        res_min = res_min % 60;
    }

    res_hour = hour + t_hour + res_hour;
    if(res_hour >= 24)
        res_hour = res_hour % 24; 

    cout << res_hour << " " << res_min;
}