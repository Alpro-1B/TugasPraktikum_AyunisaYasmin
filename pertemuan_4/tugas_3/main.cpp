#include <iostream>

using namespace std;

int main()
{
    //deklarasi variabel yang digunakan
    int a, angka1 = 0, angka2 = 1, slanjutnya = 0;

    cout<<"--PROGRAM DERET FIBONACCI--"<<endl;
    cout<<"----------------------------"<<endl;
    //perintah untuk memasukan input yang akan dimasukkan ke variabel a
    cout << "\nMasukkan angka untuk Deret Fibonacci: ";cin >> a;
    //untuk menampilkan output deret fibonacci
    cout << "\nDeret Fibonacci: ";

    //perulangan for
    for (int b = 1; b <= a; ++b) {
        // menampilkan 2 angka pertama
        if(b == 1) {
            cout << angka1 << ", ";
            //untuk melanjutkan ke step berikutnya apabila benar
            continue;
        }
        if(b == 2) {
            cout << angka2 << ", ";
            continue;
        }
        //perhitungan untuk angka ke 3 dan selanjutnya
        slanjutnya = angka1 + angka2;
        angka1 = angka2;
        angka2 = slanjutnya;

        //hasil deret fibonacci nya
        cout << slanjutnya << ", ";
    }
    return 0;
}
