#include<iostream>

#define SIZE 100000
#define RANGE 100
using namespace std;

int main(){

    int data[SIZE];

    for(int i=0; i<SIZE; i++){
        data[i] = rand()%100;
    }

    int table[RANGE];  
    for(int i=0; i<RANGE; i++){
        table[i] = 0;  
    }

    for(int i=0; i<SIZE; i++){
        table[data[i]]++;
    }

    int k=0;
    for(int i=0; i<SIZE; i++){
        for(int j=0; j<table[i]; j++){
            data[k++] = i;
        }
    }

    for(int i=0; i<SIZE; i++){
        if (i%10==0) cout << endl;
        else cout << "\t";
        cout << data[i];
    }

    return 0;
}