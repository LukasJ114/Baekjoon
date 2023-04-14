#include <iostream>
using namespace std;

int main(void){
    int total;
    int n;
    int count = 0;

    cin >> total;
    cin >> n;
    for(int i = 0; i < n; i++){
    int a, b;
    cin >> a >> b;
    count += a * b;
    }
    if(total == count){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}