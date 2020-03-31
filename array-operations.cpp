#include<iostream>

using namespace std;


int main(){

    int a[10];  //declaring int array of size 10

    a[0] = 5;   //write 5 to a at position 0
    a[9] = 4;   //write 4 to a at position 9

    int x = a[0];  //read value from a at position 0
    int y = a[9];  //read value from a at position 9
    int size = sizeof(a)/sizeof(*a);  //compute size of a

    cout << a[0] << ":" << x << ":"  << y << ":" << size << endl;
    cout << a[-1] + a[20] << endl;

    return 0;
}