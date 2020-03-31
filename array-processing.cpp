#include<iostream>

#define SIZE 100

using namespace std;

int main(){
    
    int a[SIZE];

    for(int i=0; i<SIZE; i++) {
        a[i] = rand()%100;
    }

    cout << "DATA:" << endl;
    for(int i=0; i<SIZE; i++){
        cout << a[i];
        if ((i+1)%5==0) cout << endl;
        else cout << "\t";
    }
    cout << endl;

    int sum=0;
    for(int i=0; i<SIZE; i++) {
        sum += a[i];
    }

    int sumOdd=0;
    for(int i=0; i<SIZE; i++) {
        if (a[i]%2==1) sumOdd+=a[i];
    }

    int sumEven=0;
    for(int i=0; i<SIZE; i++){
        if (a[i]%2==0) sumEven+=a[i];
    }

    int min=a[0];
    for(int i=0; i<SIZE; i++) {
        min = min > a[i] ? a[i] : min;
    }

    int max=a[0];
    for(int i=0; i<SIZE; i++) {
        max = max < a[i] ? a[i] : max;
    }

    cout << "sum    =" << sum << endl;
    cout << "sumOdd =" << sumOdd << endl;
    cout << "sumEven=" << sumEven << endl;
    cout << "min    =" << min << endl;
    cout << "max    =" << max << endl;
    cout << "average=" << sum/SIZE << endl;

}