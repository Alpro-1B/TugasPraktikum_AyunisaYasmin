#include <iostream>

using namespace std;

int main()
{
    cout <<"\nPembagian Bebek Pak Tatang"<< endl;
    //pendeklarasian variable yang akan digunakan
    int jumlah_teman,jumlah_bebek,sisa_bebek;

    //perintah user untuk memasukan input jumlah bebek
    cout <<"\nMasukkan Jumlah Bebek; ";cin>>jumlah_bebek;
    //perintah user untuk memasukan input jumlah teman
    cout << "Masukkan Jumlah Teman; ";cin>>jumlah_teman;

    //proses untuk mendapatkan hasil bagi nya
    sisa_bebek = jumlah_bebek%jumlah_teman;

    //output untuk hasil bebek yang dibagikan
    cout<<"\nJumlah Bebek yang dibagikan: "<< jumlah_bebek/jumlah_teman<<endl;
    //output untuk sisa bebek yang telah dibagikan
    cout<< "Jumlah sisa bebek yang telah dibagikan: "<<sisa_bebek<<endl;

    return 0;
}
