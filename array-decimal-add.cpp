#include<iostream>

#define SIZE 5

using namespace std;

int main(){

    int num1[SIZE], num2[SIZE];
    int result[SIZE+1];

    cout << "Enter " << SIZE << " digits of first number :";
    for(int i=0; i<SIZE; i++) cin >> num1[i];

    cout << "Enter " << SIZE << " digits of second number:";
    for(int i=0; i<SIZE; i++) cin>> num2[i];

    int carry=0;
    int j=SIZE;
    for(int i=SIZE-1; i>=0; i--){
        int sum = carry + num1[i] + num2[i];
        result[j--] = sum%10;
        carry = sum/10;
    }
    result[0] = carry;

    cout << " ";
    for(int i=0; i<SIZE; i++) cout << num1[i];
    cout << endl << "+";
    for(int i=0; i<SIZE; i++) cout << num2[i];
    cout << endl;
    for(int i=0; i<SIZE+1; i++) cout << "-";
    cout << endl;
    for(int i=0; i<SIZE+1; i++) cout << result[i];

    return 0;
}