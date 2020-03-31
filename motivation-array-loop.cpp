#include<iostream>

using namespace std;

int main(){

    int n[10];

    cout << "Enter 10 numbers: ";
    for (int i=0; i<10; i++) {
        cin >> n[i];
    }

    cout << "Reverse order: ";
    for (int i=9; i>=0; i--) {
        cout << n[i];
    }

    return 0;

}