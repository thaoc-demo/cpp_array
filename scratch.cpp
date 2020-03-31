#include<iostream>
using namespace std;

void test(int* a, int size){
    for(int i=0; i<size; i++){
        cout << a[i] << endl;
    }
}

int main(){
    int a[] = {3,1,2,5,4};
    int *b = a;
   // test(b, 5);

    int *c = new int[3] {1,2,3};
    cout << sizeof(c)/sizeof(c[0]);
   // test(c, 3);

    return 0;
}