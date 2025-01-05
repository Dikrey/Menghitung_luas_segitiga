/*
Program ini dibuat oleh Raihan_official0307 / Visualcodepo
GitHub: Dikrey
Tiktok: Raihan_official0307
Program ini dilengkapi dengan penjelasan fungsi untuk setiap sintaks yang digunakan.
*/


#include <iostream> // Header file untuk input-output stream
using namespace std; // Menggunakan namespace std untuk mempermudah penulisan kode (tanpa std::)

int main(int argc, char** argv) { // Fungsi utama program
    float alas, tinggi, luas; // Deklarasi variabel bertipe float untuk menyimpan nilai alas, tinggi, dan luas segitiga
    string nama; // Deklarasi variabel bertipe string untuk menyimpan nama pengguna

    // Menampilkan header program
    cout << "=========================="; // Menampilkan garis pemisah
    cout << "\n MENGHITUNG LUAS SEGITIGA"; // Menampilkan judul program
    cout << "\n=========================="; // Menampilkan garis pemisah lagi

    // Meminta input dari pengguna
    cout << "\nMasukkan nama anda : "; // Meminta pengguna memasukkan nama mereka
    cin >> nama; // Menyimpan input nama ke variabel 'nama'
    cout << "Masukkan nilai alas : "; // Meminta pengguna memasukkan nilai alas segitiga
    cin >> alas; // Menyimpan input alas ke variabel 'alas'
    cout << "Masukkan nilai tinggi : "; // Meminta pengguna memasukkan nilai tinggi segitiga
    cin >> tinggi; // Menyimpan input tinggi ke variabel 'tinggi'

    // Menghitung luas segitiga
    luas = (alas * tinggi) / 2; // Rumus untuk menghitung luas segitiga: (alas * tinggi) / 2

    // Menampilkan hasil perhitungan
    cout << "\n\n=========================="; // Menampilkan garis pemisah
    cout << "\nHalo, " << nama; // Menampilkan sapaan kepada pengguna
    cout << "\nMaka luas segitiga dari"; // Menampilkan pesan penjelas
    cout << "\nAlas : " << alas; // Menampilkan nilai alas yang dimasukkan
    cout << "\nTinggi : " << tinggi; // Menampilkan nilai tinggi yang dimasukkan
    cout << "\nMaka hasilnya adalah: " << luas; // Menampilkan hasil luas segitiga

    // Menampilkan pesan penutup
    cout << "\n\nSubscribe : Raihan_official0307"; // Menampilkan pesan tambahan
    cout << "\n\n=========================="; // Menampilkan garis pemisah terakhir
    
    return 0; // Mengembalikan nilai 0 untuk menandakan program berjalan tanpa error
}

