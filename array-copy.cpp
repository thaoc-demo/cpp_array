#include<iostream>


using namespace std;

void copy_array(string original[], string copy[], int size){
    for(int i=0; i<size; i++){
        copy[i] = original[i];
    }
}

int main(){

   string original[4] = {
       "apple", "orange", "pineapple", "banana"
   };

   string copy[4];

   copy_array(original, copy, 4);

   for(int i=0; i<4; i++){
       cout << copy[i] << endl;
   }

   return 0;

}