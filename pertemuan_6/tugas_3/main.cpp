#include <iostream>

using namespace std;

//function deret
void deret(int a) {

    //deklarasi variabel yang digunakan
    int angka1 = 0, angka2 = 1, slanjutnya = 0;

    //pemberitahuan deret fibonacci
    cout << "\nDeret Fibonacci: ";

    //perulangan
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
}
int main()
{
    //deklarasi variabel a
    int a;
     //judul program
     cout<<"\n     --SELAMAT DATANG--"<<endl;
     cout<<"---PROGRAM DERET FIBONACCI---"<<endl;
     cout<<"------------------------------"<<endl;

     //perintah input angka kepada user
     cout << "\nMasukkan angka untuk Deret Fibonacci: ";cin >> a;

    //memnaggil funtion deret untuk menampilkan output
    deret(a);

    cout << endl;
    return 0;
}
