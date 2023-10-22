#include <iostream>

using namespace std;

int main()
{
    //pertukaran dengan variable tambahan
    cout << " Pertukaran dengan variable tambahan" << endl;
    //deklarasi variabel
    int pertama,kedua,ketiga;
    pertama = 10;
    kedua = 8;

    cout<<"\n Sebelum ditukar"<<endl;
    cout<<" Value Pertama: 10"<<endl;
    cout<<" Value Kedua: 8"<<endl;

    //variable ketiga adalah variable pertama
    ketiga = pertama;
    //variable pertama adalah variable kedua
    pertama = kedua;
    //variable kedua adalah variable ketiga
    kedua = ketiga;

    //menampilkan output setelah ditukar
    cout<<"\n Setelah ditukar \n Value Pertama: "<<pertama<<endl;
    cout<<" Value Kedua: "<<kedua<<endl;

    //pertukaran tanpa variable tambahan
    cout<<"\n\n Pertukaran tanpa variable tambahan"<<endl;
    //reset nilai
    pertama = 10;
    kedua = 8;

    cout<<"\n Sebelum ditukar"<<endl;
    cout<<" Value Pertama: 10"<<endl;
    cout<<" Value Kedua: 8"<<endl;

    //variable pertama adalah variable pertama ditambah variable kedua
    pertama = pertama + kedua;
    //variable kedua adalah variable pertama dikurang variable kedua
    kedua = pertama - kedua;
    //variable pertama adalah variable pertama dikurang variable kedua
    pertama = pertama - kedua;

    //menampilkan output setelah ditukar
    cout<<"\n Setelah ditukar \n Value Pertama: "<<pertama<<endl;
    cout<<" Value Kedua: "<<kedua<<endl;

    return 0;
}
