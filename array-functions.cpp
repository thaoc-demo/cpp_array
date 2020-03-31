#include<iostream>

using namespace std;

void print_array(int a[], int size){
    for(int i=0; i<size; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int min(int a[], int size){
    int min = a[0];
    for(int i=0; i<size; i++){
        if (min > a[i]) min = a[i];    
    }
    return min;
}

int sum(int a[], int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=a[i];
    }
    return sum;
}

int main(){
    int a[] = {9, 2, 1, 5, 3, 4, 11};
    int size = sizeof(a)/sizeof(*a);

    print_array(a, size);
    cout << "min=" << min(a, size) << endl;
    cout << "sum=" << sum(a, size) << endl;
      
    return 0;
}