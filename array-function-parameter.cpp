#include<iostream>

using namespace std;

int func(int a[10]);
int func(int a[], int size);
int func(int* a, int size);

int min(int a[10]){
    int min = a[0];
    for(int i=0; i<10; i++)
        if (min > a[i]) min = a[i];   
    return min;
}

int sum(int a[], int size){
    int sum=0;
    for(int i=0; i<size; i++)
        sum+=a[i];   
    return sum;
}

int max(int* a, int size){
    int max = a[0];
    for(int i=0; i<size; i++)
        if (max < a[i]) max = a[i];   
    return max;
}

int main(){
    int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
    cout << "min= " << min(a) << endl;
    cout << "max= " << max(a, 10) << endl;
    cout << "sum= " << sum(a, 10) << endl; 
    return 0;
}