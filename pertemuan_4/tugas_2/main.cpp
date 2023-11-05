#include <iostream>

using namespace std;

int main()
{
    cout<<"--PROGRAM C++ PIRAMID BINTANG--"<<endl;
    cout<<"------------------------------"<<endl;

    //dekalrasi variabel yang digunakan
    int tinggi;
    int a;
    int b;
    int c;
    //perintah untuk input tinggi dan dimasukkan ke variabel tinggi
    cout<<"\nMasukkan Tinggi Segitiga: ";cin>>tinggi;

    //proses untuk menampilkan bintang
    //perulangan luar untuk membuat tinggi segitiga
    for(a=1; a<=tinggi;  a++) {
            //perulangan dalam untuk mendorong bintang ke kanan
        for(b=1; b<=tinggi-a; b++){
                cout<<" ";
        }
        for(c=1; c<=a; c++) {
            //untuk menampilkan karakter bintangnya
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}
