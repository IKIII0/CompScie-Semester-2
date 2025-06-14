#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
vector<string> nama_pekerja;
vector<long> gaji_pekerja;
class karyawan{
    public:
        string nama;
        long long gaji;
};

void bubbleSort(vector<string> &nama_pekerja) {
    int n = nama_pekerja.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nama_pekerja[j] > nama_pekerja[j + 1]) {
                swap(nama_pekerja[j], nama_pekerja[j + 1]);
                swap(gaji_pekerja[j], gaji_pekerja[j + 1]);
            }
        }
    }
}

string toLower(string str){
    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

int binarySearch(const vector<string> &arr, const string &target) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (toLower(arr[mid]) == toLower(target))
            return mid;
        else if (toLower(arr[mid]) < toLower(target))
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

void tambah_data(string nama, long long gaji){
    nama_pekerja.push_back(nama);
    gaji_pekerja.push_back(gaji);
    cout << "Data Pekerja Berhasil Ditambahkan" << endl;
    cout << "Nama Pekerja : " << nama << endl;
    cout << "Gaji Pekerja : " << gaji << endl;
}

void hapus_data(string nama){
    for(int i=0; i<nama_pekerja.size(); i++){
        if(toLower(nama_pekerja[i]) == toLower(nama)){
            nama_pekerja.erase(nama_pekerja.begin() + i);
            gaji_pekerja.erase(gaji_pekerja.begin() + i);
            cout << "Data Pekerja Berhasil Dihapus" << endl;
            return;
        }
    }
    cout << "Data Pekerja Tidak Ditemukan" << endl;
}

void tampilkan_semua_data(){
    if(nama_pekerja.empty()){
        cout << "Tidak Ada Data Pekerja" << endl;
        return;
    }
    cout << "=============================\n";
    cout << "  Daftar Semua Pekerja\n";
    cout << "=============================\n";
    for(int i=0; i<nama_pekerja.size(); i++){
        cout << "Pekerja ke-" << i+1 << endl;
        cout << "Nama Pekerja : " << nama_pekerja[i] << endl;
        cout << "Gaji Pekerja : " << gaji_pekerja[i] << endl;
        cout << "-----------------------------\n";
    }
}

void insertionSort(vector<long> &gaji_pekerja) {
    for (int i = 1; i < gaji_pekerja.size(); i++) {
        long long sementara = gaji_pekerja[i];
        int j = i - 1;
        while (j >= 0 && gaji_pekerja[j] > sementara) {
            gaji_pekerja[j + 1] = gaji_pekerja[j];
            swap(nama_pekerja[j], nama_pekerja[j + 1]);
            j--;
        }
        gaji_pekerja[j + 1] = sementara;
    }
}

int main(){
    system("cls");
    int pilihan;
    karyawan pekerja;
    while (true){
        salah:
        system("pause");
        system("cls");
        cout<<endl;
        cout<< "=============================\n";
        cout<< "  Program Data Pekerja C/C++\n";
        cout<< "=============================\n\n";
        cout<< "1. Tambah Data Pekerja"<<endl;
        cout<< "2. Hapus Data Pekerja"<<endl;
        cout<< "3. Tampilkan Semua Data Pekerja"<<endl;
        cout<< "4. Mencari Data Pekerja"<<endl;
        cout<< "5. Mengurutkan Data Pekerja"<<endl;
        cout<< "6. Keluar"<<endl;
        cout<< "=============================\n\n";
        cout<< "Masukkan Pilihan Anda: "; cin >> pilihan;
        cout<< "\n\n";
        if (pilihan == 1){
            cin.get();
            cout << "Masukkan Nama Pekerja: "; getline(cin, pekerja.nama);
            cout << "Masukkan Gaji Pekerja: "; cin >> pekerja.gaji;
            tambah_data(pekerja.nama, pekerja.gaji);
        }

        else if(pilihan == 2){
            cin.get();
            cout << "Masukkan Nama Pekerja yang Ingin Dihapus: "; getline(cin, pekerja.nama);
            hapus_data(pekerja.nama);
        }
        
        else if(pilihan == 3){
            tampilkan_semua_data();
        }
        
        else if(pilihan == 4){
            int pilih;
            string nama_yang_dicari;
            printf("Pilih metode pencarian:\n");
            printf("1. Linear Search\n");
            printf("2. Binary Search\n");
            printf("Masukkan Pilihan Anda: "); cin >> pilih;
            if (pilih == 1){
                cin.get();
                cout<<"Masukkan Nama Pekerja yang Ingin Dicari: "; getline(cin, nama_yang_dicari);
                string nama_pekerja_cari_lower = toLower(nama_yang_dicari);
                for (int i = 0; i < nama_pekerja.size(); i++) {
                    string nama_pekerja_lower = toLower(nama_pekerja[i]);
                    if (nama_pekerja_lower == nama_pekerja_cari_lower) {
                        cout << "Nama Pekerja: " << nama_pekerja[i] << endl;
                        cout << "Gaji Pekerja: " << gaji_pekerja[i] << endl;
                        break;
                        cout<< "\n\n";
                    }
                    else {
                        cout << "Pekerja Tidak Ditemukan" << endl;
                    }
                    
                }
            }
            else if (pilih == 2){
                cin.get();
                cout << "Masukkan Nama Pekerja yang Ingin Dicari: ";
                getline(cin, nama_yang_dicari);
                bubbleSort(nama_pekerja);

                int hasil = binarySearch(nama_pekerja, nama_yang_dicari);
                if (hasil != -1) {
                    cout << "Nama Pekerja: " << nama_pekerja[hasil] << endl;
                    cout << "Gaji Pekerja: " << gaji_pekerja[hasil] << endl;
                } 
                else {
                    cout << "Pekerja Tidak Ditemukan" << endl;
                }
            }
            else{
                cout << "Pilihan Tidak Valid!" << endl;
                break;
            }
        }

        else if(pilihan == 5){
            cout<<"1. Mengurutkan berdasarkan nama pekerja"<<endl;
            cout<<"2. Mengurutkan berdasarkan gaji pekerja"<<endl;
            cout<<"Pilih metode pengurutan: "; cin >> pilihan;
            if (pilihan == 1){
                cout<<"Data Pekerja Sebelum Diurutkan: " << endl;
                tampilkan_semua_data();
                bubbleSort(nama_pekerja);
                cout << "=============================\n";
                cout << "Data Pekerja Setelah Diurutkan: " << endl;
                tampilkan_semua_data();
            }
            else if (pilihan == 2){
                cout<<"Data Pekerja Sebelum Diurutkan: " << endl;
                tampilkan_semua_data();
                insertionSort(gaji_pekerja);
                cout << "=============================\n";
                cout << "Data Pekerja Setelah Diurutkan: " << endl;
                tampilkan_semua_data();

            }
            else{
                cout << "Pilihan Tidak Valid!" << endl;

            }
        }

        else if(pilihan == 6){
            printf("=============================\n");
            printf("   Terima Kasih! Uwaw!       \n");
            printf("=============================\n");
            printf("       /\\_/\\  \n");
            printf("      ( o.o )  \n");
            printf("      > ^_^ < \n");
            printf("Program berakhir dengan sukses!\n");
            break;
        }
        
        else{
            printf("Pilihan Tidak Valid!\n");
            goto salah;
        }
    }
}
