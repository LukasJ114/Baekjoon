#include <iostream>
using namespace std;

int main(void){
    int input;
    cin >> input;

    if(input % 4 != 0){
        cout << 0;
    }
    else if(input % 100 != 0 || input % 400 == 0){
        cout << 1;
    }
    else{
        cout << 0;
    }
    
}