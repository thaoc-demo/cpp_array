#include<iostream>

#define RANGE 100

using namespace std;

int findUnpaired(int A[], int size){
    
    int table[RANGE];
    for(int i=0; i<RANGE; i++) table[i]=0;

    for(int i=0; i<size; i++){
        table[A[i]]++;
    }

    for(int i=0; i<RANGE; i++){
        if (table[i]==1) {
            return i;
        }
    }
    return -1;
}

int main(){

    int numbers[] = {1,5,4,5,3,4,1,6,3,7,8,7,8};

    for(int i=0; i<sizeof(numbers)/sizeof(*numbers);i++){
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << findUnpaired(numbers, sizeof(numbers)/sizeof(*numbers));


/*
    int table[RANGE];
    for(int i=0; i<RANGE; i++) table[i]=0;

    for(int i=0; i<sizeof(numbers)/sizeof(*numbers); i++){
        table[numbers[i]]++;
    }

    for(int i=0; i<RANGE; i++){
        if (table[i]==1) {
            cout << i << endl;
            break;
        }
    }
    */

}