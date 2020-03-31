#include<iostream>

#define SIZE 100

using namespace std;

int main(){

    char text[SIZE];

    cout << "Enter some text (100 char max):";
    cin.getline(text,SIZE);

    cout << text << endl;

    for(int i=0; i<SIZE || text[i]!='\0'; i++){
        cout << (i%10);
    }
    cout << endl;

    int start, end;
    cout << "Enter start and end positions ";
    cin >> start >> end;

    cout << "substring("<<start<<"," << end <<")=";
    for(int i=start; i<end; i++){
        cout << text[i];
    }

    return 0;
    
    
}