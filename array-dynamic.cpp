#include<iostream>

using namespace std;


int sum(int* numbers, int size){
    int sum=0;
    for(int i=0; i<size; i++){
        sum+=numbers[i];
    }
    return sum;
}

int main(){

    cout << "How many numbers do you want to add? ";
    int size;
    cin >> size;

    int* numbers = new int[size];
    for(int i=0; i<size; i++){
        cout << "number " << (i+1) << ":";
        cin >> numbers[i];
    }

    cout << "Sum is: " << sum(numbers, size) << endl;
    delete numbers;

    return 0;

}