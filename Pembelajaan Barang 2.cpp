#include <iostream>
#include <iomanip>
using namespace std;
int main(){

	int jum_beli,bayar,diskon,jumlah[50],harga[50],sub_tot[50];
	string nama_barang[50];
	string nama;
	float tot;
	
	cout<<"---------------------------"<<endl;
	cout<<"|     minimarket unila    |"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<endl;
	 cout<<"---------------Hai Customer-------------"<<endl;
    cout<<"Nama: ";
	cin>>nama;
    cout<<"Jumlah barang: ";
	cin>>jum_beli; 
	
	for (int i=0; i<jum_beli;i++){
		cout<<endl;
		cout<<"Masukan Barang Ke-"<<i+1<<endl;
		cout<<endl;
		
		cout<<"Nama Barang : ";
		cin>>nama_barang[i]; 
		cout<<"Jumlah Barang  : ";
		cin>>jumlah[i]; 
		cout<<"Harga Barang  : ";
		cin>>harga[i];
		
		sub_tot[i]=jumlah[i]*harga[i];
		tot+=sub_tot[i];
	}
	
	cout<<endl;
	cout<<"STRUK BELANJA MINI MARKET UNILA"<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"No   Barang    Jumlah     Harga     Sub Total"<<endl;
	for (int i=0;i<jum_beli;i++){
		cout<<i+1<<setw(8)<<nama_barang[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<sub_tot[i]<<endl;
	}
	cout<<"---------------------------------------------------------"<<endl;


	if (tot>=100000){
		diskon=0.06*tot;
	} else if (tot>=50000){
		diskon=0.04;
	}else if (tot>=25000){
		diskon=0.02;
	}else {
		diskon=0;
	}
	

	cout<<"Jumlah Bayar : Rp."<<tot<<endl;
	cout<<"Dikon        : Rp."<<diskon<<endl; 
	cout<<"Total Bayar  : Rp."<<tot-diskon<<endl;
	cout<<"Bayar        : Rp.";
	cin>>bayar; 
	cout<<"Kembali      : Rp."<<(bayar-(tot-diskon))<<endl;
	
	
	cout<<"terimakasi telah bebelanja"<<endl;
		
}
