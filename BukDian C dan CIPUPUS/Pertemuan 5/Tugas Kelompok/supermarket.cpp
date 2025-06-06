#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    char ulang, ulang1;
    int jumlah, kategori, barang, bulan;
    long harga1 = 0, harga2 = 0, harga3 = 0, totalHarga = 0, hargaDiskon;
    
    printf("Selamat datang di SuperMarket IKINGAWI\n");
    printf("Masukkan Bulan Transaksi : ");
    cin >> bulan;
    
    printf("PILIH KATEGORI :\n");
    printf("1. Produk Hewan\n");
    printf("2. Buah dan Sayur\n");
    printf("3. Minuman\n");
    scanf("%d", &kategori);

    if (kategori == 1) {
        cout << "1. Susu UHT\n";
        cout << "2. Keju\n";
        cout << "3. Yoghurt\n";
        cout << "4. Telur\n";
        printf("Pilih barang (1-4): ");
        scanf(" %d", &barang);
        printf("Masukkan jumlah barang: ");
        scanf("%d", &jumlah);
        switch (barang) {
            case 1: harga1 += 17000 * jumlah; break;
            case 2: harga1 += 20000 * jumlah; break;
            case 3: harga1 += 15000 * jumlah; break;
            case 4: harga1 += 2000 * jumlah; break;
            default: cout << "Barang tidak valid!" << endl; break;
            }
            printf("Apakah ada barang yang ingin dibeli lagi? (Y/N): ");
            cin >> ulang1;
        };
    }
    else if (kategori == 2) {
        cout << "1. Apel\n";
        cout << "2. Pepaya\n";
        cout << "3. Anggur\n";
        cout << "4. Melon\n";
        cout << "5. Semangka\n";
        cout << "6. Pisang\n";
        cout << "7. Brokoli\n";
        cout << "8. Wortel\n";
        printf("Pilih barang (1-8): ");
        scanf("%d", &barang);
        printf("Masukkan jumlah barang: ");
        scanf("%d", &jumlah);

        switch (barang) {
            case 1: harga2 = 5000 * jumlah; break;
            case 2: harga2 = 10000 * jumlah; break;
            case 3: harga2 = 15000 * jumlah; break;
            case 4: harga2 = 20000 * jumlah; break;
            case 5: harga2 = 15000 * jumlah; break;
            case 6: harga2 = 10000 * jumlah; break;
            case 7: harga2 = 7000 * jumlah; break;
            case 8: harga2 = 3000 * jumlah; break;
            default: cout << "Barang tidak valid!" << endl; break;
        }
    }
    else if (kategori == 3) {
        // Minuman
        cout << "1. Soda\n";
        cout << "2. Bir\n";
        cout << "3. Teh\n";
        cout << "4. Kopi\n";
        printf("Pilih barang (1-4): ");
        scanf("%d", &barang);
        printf("Masukkan jumlah barang: ");
        scanf("%d", &jumlah);

        switch (barang) {
            case 1: harga3 = 10000 * jumlah; break;
            case 2: harga3 = 13000 * jumlah; break;
            case 3: harga3 = 7000 * jumlah; break;
            case 4: harga3 = 8000 * jumlah; break;
            default: cout << "Barang tidak valid!" << endl; break;
        }
    }
    else {
        cout << "Kategori tidak valid\n";
    }
    totalHarga = harga1 + harga2 + harga3;
    if (bulan == 9) {
        hargaDiskon = 0.5 * totalHarga;
    } else if (bulan > 12 || bulan <= 0) {
        cout << "Bulan Tidak valid\n";
        return 1;
    } else {
        hargaDiskon = totalHarga;
    }

    cout << "Total Anda : " << hargaDiskon << endl;
    cout << "Terima Kasih :)\n";
}
