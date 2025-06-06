#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float bil1,bil2,hasil,hasil2; //seharusnya bil1,bil2,bil3,bil4,hasil;
    int bil3,bil4;

    bil1=8.9;
    bil2=3.1;
    bil3=6;
    bil4=7;

    cout<<"Bilangan 1 adalah "<<bil1<<endl;
    cout<<"Bilangan 2 adalah "<<bil2<<endl;
    cout<<"Bilangan 3 adalah "<<bil3<<endl; //seharusnya bil3
    cout<<"Bilangan 4 adalah "<<bil4<<endl; //seharusnya bil4
    // bil1+bil2*10-0.1+(bil3%bil4);
    hasil = bil1+bil2*10-0.1+(bil3%bil4);
    hasil2 = (bil3/bil4); 
    
    cout<<fixed << setprecision(2); //gak nyimpen di variabel hasil, abistu gak ada dimunculin
    cout<<"Hasil adalah "<<hasil<< endl; //gak nyimpen di variabel hasil, abistu gak ada dimunculin
    cout<<"Hasil 2 adalah "<<hasil2<< endl; //gak nyimpen di variabel hasil, abistu gak ada dimunculin
    // cout<<"Hasil adalah "<<hasil; //gak nyimpen di variabel hasil, abistu gak ada dimunculin
}