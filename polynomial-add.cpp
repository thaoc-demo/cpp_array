#include<iostream>


using namespace std;

void print_polynomial(int terms[], int size){
    for(int i=size-1; i>0; i--){
        cout << terms[i] << "x^" << i << " + ";
    }
    cout << terms[0] << endl;
}

int main(){
    const int size = 4;
    int e1[size];
    int e2[size];
    int r[size];

    cout << "ax^3 + bx^2 + cx + d :";
    cin >> e1[3] >> e1[2] >> e1[1] >> e1[0];

    cout << "ex^3 + fx^2 + gx + h :";
    cin >> e2[3] >> e2[2] >> e2[1] >> e2[0];

    for(int i=0; i<4; i++){
        r[i] = e1[i] + e2[i];
    }

    cout << endl;
    print_polynomial(e1, size);
    print_polynomial(e2, size);
    cout << "-------------------------" << endl;
    print_polynomial(r, size);

   
}