#include <iostream>

using namespace std;

int main()
{
    //deklarasi variabel angka1, angka2, angka3
    int angka1,angka2,angka3;

    //perintah untuk input angka pertama, angka kedua, angka ketiga dan dimasukkan kedalam variabel angka1, angka2, angka3
    cout<<"Masukkan Angka Pertama: ";cin>>angka1;
    cout<<"Masukkan Angka Kedua: ";cin>>angka2;
    cout<<"Masukkan Angka Ketiga: ";cin>>angka3;

    //pengkondisian untuk menentukan nilai terbesar
    //jika angka1 lebih besar dari angka2 dibandingkan dengan angka1 lebih besar dari angka 3
    if(angka1>angka2 && angka1>angka3){
        cout<<"Nilai Terbesar: "<<angka1<<endl;
    //jika angka2 lebih besar dari angka1 dibandingkan dengan angka2 lebih besar dari angka 3
    }else if(angka2>angka1 && angka2>angka3){
        cout<<"Nilai Terbesar: "<<angka2<<endl;
    }else{
        //tampilkan output hasil angka terbesarnya
        cout<<"Nilai Terbesar: "<<angka3<<endl;
    }
    return 0;
}
