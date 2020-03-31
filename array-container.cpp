#include<iostream>
#include<algorithm>
#include<array>

using namespace std;


int main(){
    
    array<int,10> numbers;

    for(int i=0; i<numbers.size(); i++){
        numbers[i] = rand()%1000;
    }

    cout << "original: ";
    for(int n: numbers){
        cout << n << " ";
    }
    cout << endl;

    sort(numbers.begin(), numbers.end());

    cout << "sorted  : ";
    for(int i=0; i<numbers.size(); i++){
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;

}