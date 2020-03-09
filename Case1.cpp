/*
Nama	: Difa Bagasputra Maulana
Kelas	: A
NPM 	: 140810180057
Nama Program : Studi Kasus 1 nilai maks
*/

#include<iostream>
using namespace std;

int main(){
	int x[99];
	int n,i;
	int maks = 0;
	
	cout<<"Masukkan Jumlah Angka : ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Bilangan ke - "<<i+1<<" : ";cin>>x[i];
	}
	
	for(int i=0;i<n;i++){
		if(x[i]>maks)
			maks=x[i];
	}
	cout<<"Output = "<<maks<<endl;
}
