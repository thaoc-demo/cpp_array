
#include<iostream>

using namespace std;

void populate_random_array(int a[], int size, int range){
    for(int i=0; i<size; i++) {
        a[i] = rand()%range;
    }
}

void print_array(int a[], int size, int num_col){
    for(int i=0; i<size; i++){
        if (i%num_col==0) {
            cout << endl;
        } else {
            cout << "\t";
        }
        cout << a[i];
    }
    cout << endl;
}

bool is_odd(int n){
    return n%2==1;
}

void make_data_even(int a[], int size){
    for(int i=0; i<size; i++){
        if (is_odd(a[i])) a[i] = a[i]+1;
    }
}



#define SIZE 100
#define NUM_COL 10
#define RANGE 10000

int main(){
    
    int a[SIZE];

    cout << "DATA:" << endl;

    populate_random_array(a, SIZE, RANGE);

    print_array(a, SIZE, NUM_COL);

    cout << "DATA (evenized):" << endl;

    make_data_even(a, SIZE);

    print_array(a, SIZE, NUM_COL);

   return 0;

}