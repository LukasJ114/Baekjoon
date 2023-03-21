// 알람 시계

#include <iostream>
using namespace std;

int main(void){
    int hour, min;
    cin >> hour >> min;

    if(min >= 45){
        min -= 45;
        cout << hour << " " << min;
        return 0;
    }

    if(hour == 0){
        hour = 23;
        min = 60 - (45 - min);
    }
    else{
        hour -= 1;
        min = 60 - (45 - min);
    }
    cout << hour << " " << min;
    return 0;
}