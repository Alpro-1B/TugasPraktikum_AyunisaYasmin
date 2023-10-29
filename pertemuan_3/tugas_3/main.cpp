#include <iostream>

using namespace std;

int main()
{
    //deklarasi variabel luas
    char luas;
    //deklarasi variabel sisi, panjang, lebar, alas, tinggi
    int sisi,panjang,lebar,alas,tinggi;

    //pemberitahuan utk kode yang harus dipilih apabila mau melakukan perhitungan
    cout<<"KITA BISA PERHITUNGAN: PERSEGI, PERSEGI PANGJANG, dan SEGITIGA"<<endl;
    cout<<"\nKETIK 'A' untuk menghitung PERSEGI\n"<<endl;
    cout<<"KETIK 'B' untuk menghitung PERSEGI PANJANG\n"<<endl;
    cout<<"KETIK 'C' untuk menghitung SEGITIGA\n "<<endl;

    //input kode yang sudah dibertahu untuk menjalankan perhitungannya
    cout<<"\nIngin Menghitung apa: ";cin>>luas;

    switch(luas){
    //case A berisi perhitungan PERSEGI
    case 'A':
        cout<<"\nMenghitung PERSEGI\n"<<endl;
        //perintah untuk input nilai sisi dan dimasukkan ke variabel sisi
        cout<<"Masukkan Sisi: ";cin>>sisi;
        //perintah untuk output perhitungan sisi*sisi dri nilai yang sudah diberikan
        cout<<"Luas Persegi: "<<sisi*sisi<<endl;
        break;
        //case B berisi perhitungan PERSEGI PANJANG
    case 'B':
        cout<<"\nMenghitung PERSEGI PANJANG\n"<<endl;
        //perintah untuk input nilai panjang dan dimasukkan ke variabel panjang
        cout<<"Masukkan Panjang: ";cin>>panjang;
        //perintah untuk input nilai lebar dan dimasukkan ke variabel lebar
        cout<<"Masukkan Lebar: ";cin>>lebar;
        //perintah untuk output perhitungan panjang*lebar dri nilai yang sudah diberikan
        cout<<"Luas Persegi Panjang: "<<panjang*lebar<<endl;
        break;
        //case C berisi perhitungan SEGITIGA
    case 'C':
        cout<<"\nMenghitung SEGITIGA\n"<<endl;
        //perintah untuk input nilai alas dan dimasukkan ke variabel alas
        cout<<"Masukkan Alas: ";cin>>alas;
        //perintah untuk input nilai tinggi dan dimasukkan ke variabel tinggi
        cout<<"Masukkan Tinggi: ";cin>>tinggi;
        //perintah untuk output perhitungan 0,5*alas*tinggi dri nilai yang sudah diberikan
        cout<<"Luas Segitiga: "<<0.5*alas*tinggi<<endl;
        break;
    default:
        //output yang dikeluarkan apabila user menginputkan kode yang salah
        cout<<"Kami tidak mengerti maksud anda"<<endl;
        break;
    }
    return 0;
}
