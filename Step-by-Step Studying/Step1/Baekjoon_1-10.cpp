#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int A;
    string B;
    int result1, result2, result3;
    
    // input 2개의 수. A : 나누어지는 수. B : 나눌 수. 
    cin >> A;
    cin >> B;
    
    int intB = stoi(B);     // string으로 받은 변수B를 int형으로 변환 

    int result4 = A * intB;

    int output[3];
    for (int i = 0; i < 3; i++){
        char tmp1 = B[2-i];
        int tmp2 = int(tmp1 - '0');
        output[i] = A * tmp2;
    }    
    
    // 결과물 출력
    for(int i = 0; i < 3; i++){
        cout << output[i] << endl;
    }
    cout << result4;

  
}