#include <iostream>

using namespace std;


main(){
    int inpt;
    float brg[10],hr[10], jml[10],tothr=0,totjml=0,totbel,hasildis,dis=0;
    char nm[10][10];
    string pilih,nama,barang;

    cout<<"--------------------------------------"<<endl;
    cout<<"|          Minimarket unila       |"<<endl;
    cout<<"--------------------------------------"<<endl;

    cout<<"Member atau non member <ya/tdk>: ";cin>>pilih;
    cout<<"--------------------------------------"<<endl<<endl;
    if(pilih=="ya"){
        cout<<"---------------Hai Member-------------"<<endl;
        cout<<"Nama: ";cin>>nama;
        cout<<"Jumlah barang: ";cin>>inpt;
            for(int i=0; i<inpt; i++){
                cout<<"--------------------------------------"<<endl;
                cout<<"nama barang : "; cin>>barang;
                cout<<"Harga    : "; cin>>hr[i];
                cout<<"jumlah   : "; cin>>jml[i];
                totbel+=hr[i]*jml[i];
            }

                if(totbel>=100000){
                    dis=0.05*totbel;
                    hasildis=totbel-dis;
                        cout<<"--------------Pembayaran-------------"<<endl;
                        cout<<"Jenis member  : Ya"<<endl;
                        cout<<"Nama pelanggan: "<<nama<<endl;
                        cout<<"Jumlah belanja: "<<totbel<<endl;
                        cout<<"Diskon (5%)   : "<<dis<<endl;
                        cout<<"Total sebelum diskon     : "<<totbel<<endl;
                        cout<<"Total setelah diskon     : "<<hasildis<<endl;
                        cout<<"--------------------------------------"<<endl;
                }else{
                        cout<<"--------------Pembayaran--------------"<<endl;
                        cout<<"Jenis member  : Ya"<<endl;
                        cout<<"Nama pelanggan: "<<nama<<endl;
                        cout<<"Diskon        : - "<<endl;
                        cout<<"Total belanja: "<<totbel<<endl;
                        cout<<"--------------------------------------"<<endl;
                }

    } else if (pilih=="tdk"){
        cout<<"---------------Non Member-------------"<<endl;
        cout<<"Nama: ";cin>>nama;
        cout<<"Jumlah barang: ";cin>>inpt;
            for(int i=0; i<inpt; i++){
                cout<<"--------------------------------------"<<endl;    
				cout<<"nama barang : "; cin>>barang;     
                cout<<"Harga    : "; cin>>hr[i];
                cout<<"jumlah   : "; cin>>jml[i];
                totbel+=hr[i]*jml[i];
            }
                 cout<<"--------------Pembayaran--------------"<<endl;
                 cout<<"Jenis member  : Tidak"<<endl;
                 cout<<"Nama pelanggan: "<<nama<<endl;
                 cout<<"Diskon        : - "<<endl;
                 cout<<"Total belanja : "<<totbel<<endl;
                 cout<<"--------------------------------------"<<endl;


    }else{
         cout<<"Data yang anda masukan salah"<<endl;
     }

}
