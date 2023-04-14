#include <iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;

    int count = n / 4;
    for(int i = 0; i < count - 1; i++){
        cout << "long ";
    }
    cout << "long int";
}