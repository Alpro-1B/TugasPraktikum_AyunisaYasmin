#include <iostream>

using namespace std;

int main() {

    cout << "-- NILAI TERBESAR --" << endl;
    cout << "-----------------------\n" << endl;
    cout << endl;

    int arr;

        // Meminta pengguna untuk memasukkan ukuran array
        cout << "Berapa banyak nilai yang diinginkan: ";cin >> arr;

        if (arr <= 0) {
            cout << "Ukuran nilai harus lebih besar dari 0." <<endl;
        }

        // Membuat array dengan ukuran yang dimasukkan pengguna
        int arr_a[arr];

        // Meminta pengguna untuk memasukkan nilai array
        cout << "\nMasukkan nilai-nilai yang diinginkan:" <<endl;
        for (int a = 0; a < arr; ++a) {
            cout << "\nNilai ke-" << a + 1 << ": ";cin >> arr_a[a];
        }

        int nilai_tertinggi = arr_a[0];
        int indeks_nilai = 0;

        // Cari nilai tertinggi dan indeksnya
        for (int a = 0; a < arr; ++a) {
            if (arr_a[a] > nilai_tertinggi) {
                nilai_tertinggi = arr_a[a];
                indeks_nilai = a;
            }
        }

        cout << "\nNilai tertinggi: " << nilai_tertinggi <<endl;

        // Periksa apakah nilai tersebut ada dalam array dan tampilkan indeksnya jika ditemukan
        if (nilai_tertinggi == arr_a[indeks_nilai]) {
            cout << "Nilai ada di indeks ke: - " << indeks_nilai <<endl;
        } else {
            cout << "\nNilai tersebut tidak ditemukan." <<endl;
        }

        cout << "\n\n-- TERIMA KASIH --" << endl;

    return 0;
}
