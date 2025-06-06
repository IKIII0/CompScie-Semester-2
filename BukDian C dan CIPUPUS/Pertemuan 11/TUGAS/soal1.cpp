#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int main(){
    string user, password, user_input, password_input;
    int hitung_benar;
    system("cls");
    cout<<"Daftar User: "; getline(cin,user);
    cout<<"Daftar Password: "; getline(cin,password);
    cout<<"User: "; getline(cin,user_input);
    cout<<"Password: "; getline(cin,password_input);
    
    for(int i = 0; i < user.length(); i++){
        user[i] = toupper(user[i]);
    }

    for(int i = 0; i < user_input.length(); i++){
        user_input[i] = toupper(user_input[i]);
    }

    if (user_input == user){
        if(password_input == password){
            cout<<"User: "<<user<<endl;
            cout<<"Password: "<<password<<endl;
            cout<<"Berhasil Login!";
        }
        else{
            cout<<"Password: "<<password<<endl;
            cout<<"Password salah!";
        }
    }
    else{
        cout<<"Username salah!";
    }
}