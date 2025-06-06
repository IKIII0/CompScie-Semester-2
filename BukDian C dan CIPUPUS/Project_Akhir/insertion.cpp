#include <iostream>
#include <vector>
using namespace std;

class nilai_siswa{
    public:
        float matematika;
        float fisika;
        float kimia;

        void tampilkan_matematika(vector<float> nilai_matematika, int n){
            for(int i=0;i<n;i++){
                cout << nilai_matematika[i] << " ";
            }
        }
        void tampilkan_fisika(vector<float> nilai_fisika, int n){
            for(int i=0;i<n;i++){
                cout << nilai_fisika[i] << " ";
            }
        }
        void tampilkan_kimia(vector<float> nilai_kimia, int n){
            for(int i=0;i<n;i++){
                cout << nilai_kimia[i] << " ";
            }
        }
};

int main(){
    nilai_siswa nilai;
    int banyak_siswa;
    cout << "Banyak Siswa : ";cin >> banyak_siswa;

    vector<float> nilai_matematika;
    vector<float> nilai_fisika;
    vector<float> nilai_kimia;

    for(int i=0;i<banyak_siswa;i++){
        cout << "\nDaftar Nilai Siswa ke-" << i+1 << endl;
        cout << "Matematika  : ";cin >> nilai.matematika;
        cout << "Fisika      : ";cin >> nilai.fisika;
        cout << "Kimia       : ";cin >> nilai.kimia;
        nilai_matematika.push_back(nilai.matematika);
        nilai_fisika.push_back(nilai.fisika);
        nilai_kimia.push_back(nilai.kimia);
    }

    system("cls");
    cout << "Sebelum Diurutkan" << endl;
    cout << "=================";
    cout << "\nNilai Matematika\t: ";
    nilai.tampilkan_matematika(nilai_matematika, banyak_siswa);
    cout << "\nNilai Fisika\t\t: ";
    nilai.tampilkan_fisika(nilai_fisika, banyak_siswa);
    cout << "\nNilai Kimia\t\t: ";
    nilai.tampilkan_kimia(nilai_kimia, banyak_siswa);
    
    // Mengurutkan Nilai Matematika
    for(int i=1;i<banyak_siswa;i++){
        float sementara = nilai_matematika[i];
        int j = i - 1;
        while(j >= 0 && nilai_matematika[j] > sementara){
            nilai_matematika[j+1] = nilai_matematika[j];
            j--;
        }
        nilai_matematika[j+1] = sementara;
    }

    // Mengurutkan Nilai Fisika
    for(int i=1;i<banyak_siswa;i++){
        float sementara = nilai_fisika[i];
        int j = i - 1;
        while(j >= 0 && nilai_fisika[j] > sementara){
            nilai_fisika[j+1] = nilai_fisika[j];
            j--;
        }
        nilai_fisika[j+1] = sementara;
    }

    // Mengurutkan Nilai Kimia
    for(int i=0;i<banyak_siswa;i++){
        float sementara = nilai_kimia[i];
        int j = i - 1;
        while(j >= 0 && nilai_kimia[j] > sementara){
            nilai_kimia[j+1] = nilai_kimia[j];
            j--;
        }
        nilai_kimia[j+1] = sementara;
    }
    
    cout << "\n\nSudah Diurutkan" << endl;
    cout << "===============";
    cout << "\nNilai Matematika\t: ";
    nilai.tampilkan_matematika(nilai_matematika, banyak_siswa);
    cout << "\nNilai Fisika\t\t: ";
    nilai.tampilkan_fisika(nilai_fisika, banyak_siswa);
    cout << "\nNilai Kimia\t\t: ";
    nilai.tampilkan_kimia(nilai_kimia, banyak_siswa);
}