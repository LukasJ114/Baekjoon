// 오븐시계

#include <iostream>
using namespace std;

int main(void){
    // 입력받기
    int inhour, inmin, time;
    cin >> inhour >> inmin;     // 현재 시간 (시간 , 분)
    cin >> time;                // 소요 시간 (분)

    inmin += time;
    if(inmin >= 60){
        int tmpHour = inmin / 60;
        int tmpMin = inmin % 60;
        int ttmp = inhour + tmpHour;
        if (ttmp >= 24) {ttmp -= 24;}
        cout << ttmp << " " << tmpMin;
    }
    else{
        cout << inhour << " " << inmin;
    }
}