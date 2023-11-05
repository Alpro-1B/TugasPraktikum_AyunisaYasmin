#include <iostream>

using namespace std;

int main()
{

        cout<<"--PROGRAM PENAMPILAN BILANGAN GANJIL, GENAP, PRIMA--"<<endl;
        cout<<"              SERTA FAKTORNYA"<<endl;
        cout<<"-------------------------------------------------"<<endl;

        //pendeklarasian variabel yang akan digunakan
        int bilanganPrima;
        int angka;
        int ganjil=0;
        int genap=0;
        int prima=0;
        //perintah untuk input untuk angka dan dimasukkan ke variabel angka
        cout<<"\nMasukkan Batas Angka: ";cin>>angka;

        //untuk menampilkan output bilangan ganjil
        cout<<"\nBilangan Ganjil: ";
        //perulangan dari bilangan 1 sampai blangan yang diinputkan , sampai hanya bilangan ganjil yang tersisa
        for (int a = 1; a <= angka; a++){
            if (a % 2 != 0){
                //menampilkan hasil bilangan ganjil
                cout<<a<<" ";
                //untuk memasukan bilangan ganjil yang telah didapat ke variabel ganjil agar bisa ditampilkan dan uuntuk mencari faktornya
                ganjil+=a;
            }
        }
        //menampilkan jumlah bilangan dari 1 sampai blangan yang diinputkan
        cout << "\nJumlah bilangan ganjil dari angka 1 hingga " << angka << " adalah: " << ganjil;

        //umtuk menampilkan ouput faktor faktor jumlah blangan ganjil
        cout << "\nFaktor-faktor dari jumlah bilangan ganjil adalah: ";
        //perulanagan bilangan ganjil untuk mencari faktornya
        for (int f = 1; f <= ganjil; f++){
        if (ganjil % f == 0){
            // untuk menampilkan faktor faktornya
            cout << f << " ";
        }

    }
    //akhir bilangan ganjil

        //untuk menampilkan ouput bilangan genap
        cout<<"\n\nBilangan Genap: ";
        //perulangan dari bilangan 1 sampai blangan yang diinputkan , sampai hanya bilangan genap yang tersisa
        for (int b = 1; b <= angka; b++){
            if (b % 2 == 0){
                //untuk hasil bilangan ganjil
                cout<<b<<" ";
                //untuk memasukan bilangan genap yang telah didapat ke variabel genap agar bisa ditampilkan dan uuntuk mencari faktornya
                genap++;
            }
        }
        //untuk menampilkan output jumlah bilangan dari 1 sampai bilangan yang diinputkan
        cout << "\nJumlah bilangan genap dari angka 1 hingga " << angka << " adalah: " << genap;

        //untuk menampilkan output hasil dari faktor faktor jumlah bilangan genap
        cout << "\nFaktor-faktor dari jumlah bilangan genap adalah: ";
        //perulangan bilangan genap untuk mencari faktornya
        for (int f = 1; f <= genap; f++){
        if (genap % f == 0){
            //untuk hasil faktor faktor bilangan genap
            cout << f << " ";
        }

    }
    //akhir bilangan genap

        //untuk menampilkan output bilangan prima
        cout<<"\n\nBilangan Prima: ";

        //perulangan dari bilangan 1 sampai blangan yang diinputkan , sampai hanya bilangan prima yang tersisa
        for (int c = 2; c <= angka; ++c){
            int bilanganPrima = 1;
            for (int d = 2; d * d <= c; ++d){
                if (c % d == 0){
                    bilanganPrima = 0;
                    break;
                    }
            }
            if (bilanganPrima == 1){
                //untuk hasil bilangan prima
                cout<<c<<" ";
                prima++;
            }
        }
        //untuk menampilkan output jumlah bilangan prima dari 1 sampai angka yang diinputkan
        cout << "\nJumlah bilangan prima dari angka 1 hingga " << angka << " adalah: " << prima;

        //untuk menampilkan ouput jumlah faktor faktor bilangan prima
        cout << "\nFaktor-faktor dari jumlah bilangan prima adalah: ";
        for (int f = 1; f <= prima; f++){
        if (prima % f == 0){
            //hasil faktor faktor bilangan prima
            cout << f << " ";
        }

    }
    //akhir bilangan prima
    return 0;
}
