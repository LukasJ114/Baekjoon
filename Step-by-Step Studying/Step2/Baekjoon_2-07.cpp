#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
    int dice1, dice2, dice3;
    cin >> dice1 >> dice2 >> dice3;
    int diceList[3] = {dice1, dice2, dice3};
    
    // 숫자 3개가 다 같은 경우
    if(dice1 == dice2 && dice2 == dice3){
        int reward = 10000 + dice1 * 1000;
        cout << reward;
    }
    // 숫자 3개가 다 다른 경우
    else if(dice1 != dice2 && dice2 != dice3 && dice3 != dice1){
        int reward = 100 * (*max_element(diceList, diceList + 3));
        cout << reward;
    }
    else{
        int tmp;
        for(int i = 0; i < 2; i++){
            for (int j = i + 1; j < 3; j++){
                if(diceList[i] == diceList[j]) {
                    tmp = diceList[i];
                    int reward = 1000 + tmp * 100;
                    cout << reward;
                    return 0;
                    }
            }
        }
    }
}