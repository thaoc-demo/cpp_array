#include<iostream>

using namespace std;

int main(){

    string words[] = {
        "apple", "orange", "pineapple", "mango", "pear", "banana"
    };

    cout << "Enter a string: ";
    char* s1, s2;
    
    cout << "Enter a string: ";
    cin.getline(s2,100);

    int pos1=-1;
    int pos2=-1;

    for(int i=0; i<sizeof(words)/sizeof(*words); i++){
        if (s1 == words[i]){
            pos1 = i;
        } else if (s2 == words[i]){
            pos2 = i;
        }
    }

    cout << "Distance = ";
    int distance = pos2-pos1;
    if (distance <0) distance = distance *-1;
    cout << distance;
    
    return 0;



}