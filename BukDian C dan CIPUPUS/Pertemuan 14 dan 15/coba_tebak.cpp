#include<iostream>
using namespace std;
int main(){
    int n1, n2;
    int *p;
    p = &n1; 
    *p = 10; 
    p = &n2;
    *p = 20;
    cout << "Nilai n1: " << n1 << endl;
    cout << "Nilai n2: " << n2 << endl;
    cout << "Nilai P = "<< *p << endl;
}