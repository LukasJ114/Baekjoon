#include <iostream>
using namespace std;

int main(void){
    int num;
    cin >> num;
    int output = 0;
    for(int i = 1; i < num+1; i++){
        output += i;
    }   
    cout << output;
}