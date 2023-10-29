#include <iostream>

using namespace std;

int main()
{
    //Deklarasi Variabel nilai, nama dan npm
    int nilai;
    string nama,npm;

    //perintah untuk input nama, npm, dan nilai, setelah diinput nilai akan dimasukkan kedalam variabel nama, npm, nilai
    cout<<"NAMA                : ";cin>>nama;
    cout<<"NPM                 : ";cin>>npm;
    cout<<"Masukkan Nilai anda : ";cin>>nilai;

    //pengkondisian if else
    //if nilai lebih besar sama dengan dari 90 artinya klo masukin nilai mulai dri 90 keatas outputnya "Selamat! Anda mendapatkan nilai A."
    if (nilai>=90) {
        cout<<"Selamat! Anda mendapatkan nilai A."<<endl;
        //if nilai lebih besar sama dengan dari 80 artinya klo masukin nilai mulai dri 80 keatas outputnya "Anda mendapatkan nilai B."
    }else if(nilai>=80){
        cout<<"Anda mendapatkan nilai B."<<endl;
        //if nilai lebih besar sama dengan dari 70 artinya klo masukin nilai mulai dri 70 keatas outputnya "Anda mendapatkan nilai C."
    }else if(nilai>=70){
        cout<<"Anda mendapatkan nilai C."<<endl;
        //if nilai lebih besar sama dengan dari 60 artinya klo masukin nilai mulai dri 60 keatas outputnya "Anda mendapatkan nilai D."
    }else if(nilai>=60){
        cout<<"Anda mendapatkan nilai D."<<endl;
    }else{
        //apabila nilai yang dimasukkan kurang dari 60 maka akan menghasilkan output"Anda mendapatkan nilai E."
        cout<<"Anda mendapatkan nilai E."<<endl;
    }
    return 0;
}
