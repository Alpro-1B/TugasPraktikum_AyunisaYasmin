#include <iostream>

using namespace std;

int main()
{
    cout << " Pertukaran dengan variable tambahan" << endl;

    int pertama,kedua,ketiga;
    pertama = 10;
    kedua = 8;

    cout<<"\n Sebelum ditukar"<<endl;
    cout<<" Value Pertama: 10"<<endl;
    cout<<" Value Kedua: 8"<<endl;

    ketiga = pertama;
    pertama = kedua;
    kedua = ketiga;

    cout<<"\n Setelah ditukar \n Value Pertama: "<<pertama<<endl;
    cout<<" Value Kedua: "<<kedua<<endl;

    cout<<"\n\n Pertukaran tanpa variable tambahan"<<endl;
    pertama = 10;
    kedua = 8;

    cout<<"\n Sebelum ditukar"<<endl;
    cout<<" Value Pertama: 10"<<endl;
    cout<<" Value Kedua: 8"<<endl;

    pertama = pertama + kedua;
    kedua = pertama - kedua;
    pertama = pertama - kedua;

    cout<<"\n Setelah ditukar \n Value Pertama: "<<pertama<<endl;
    cout<<" Value Kedua: "<<kedua<<endl;

    return 0;
}
