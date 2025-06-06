#include <iostream>
using namespace std;

int main(){
    float bil1,bil2;char op;
    cout<<"\n Ketik bil1 operator bil2, (Contoh: 3 * 4): ";cin>>bil1;cin>>op;cin>>bil2;

    switch (op){
    case '+':cout<<"= "<<bil1 + bil2<<endl;break;
    case '-':cout<<"= "<<bil1 - bil2<<endl;break;
    case '*':cout<<"= "<<bil1 * bil2<<endl;break;
    case '/':cout<<"= "<<bil1 / bil2<<endl;break;
    default: cout<<"ERROR: operator hanya +,-,*,/\n";
    }
}