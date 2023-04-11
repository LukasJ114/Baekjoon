#include <iostream>
using namespace std;

int main(void){
    int num;
    cin >> num;

    for(int i = 0; i < num; i++){
        int A, B;
        cin >> A >> B;
        cout << A + B << endl;
    }
}