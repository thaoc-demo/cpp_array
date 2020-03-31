#include<iostream>

using namespace std;

int main(){

    int n[10];

    cout << "Enter 10 numbers: ";
    cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4] >> n[5] >> n[6] >> n[7] >> n[8] >> n[9];

    cout << "Reverse order: ";
    cout << n[9] << n[8] << n[7] << n[6] << n[5] << n[4] << n[3] << n[2] << n[1] << n[0];

    return 0;
    
}