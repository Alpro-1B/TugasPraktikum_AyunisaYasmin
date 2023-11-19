#include <iostream>

using namespace std;

// funtion segitiga
    void segitiga(int tinggi) {
    //proses untuk menampilkan bintang
    //perulangan luar untuk membuat tinggi segitiga
    for(int a=1; a<=tinggi;  a++) {
            //perulangan dalam untuk mendorong bintang ke kanan
        for(int b=1; b<=tinggi-a; b++){
                cout<<" ";
        }
        for(int c=1; c<=a; c++) {
            //untuk menampilkan karakter bintangnya
            cout<<" *";
        }
        cout<<endl;
    }
}

int main()
{
    //deklaraasi variabel tinggi
    int tinggi;
    //judul program
    cout<<"\n--PROGRAM C++ PIRAMID BINTANG--"<<endl;
    cout<<"-------------------------------"<<endl;

    //perintah untuk input tinggi dan dimasukkan ke variabel tinggi
    cout<<"\nMasukkan Tinggi Segitiga: ";cin>>tinggi;

    //memanggil function untuk menampilkan output
    segitiga(tinggi);

    cout << endl;
    return 0;

}

