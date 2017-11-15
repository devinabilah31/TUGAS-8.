#include <iostream>
using namespace std;

int max(int nomer[])
{
	int terbesar;
	
	for(int i=0; i<10; i++){
		if(i == 0 || nomer[i] > terbesar)
			terbesar=nomer[i];
		}
		return terbesar;
	}
int min(int nomer[]){
	
	int terkecil;
	
	for(int i=0;i<10;i++){
		if(i==0 || nomer[i] < terkecil)
			terkecil=nomer[i];
	}
	return terkecil;
}
int main(){
	
	int nomer[10];
	
	for(int i=0;i<10;i++){
		cout<<"Masukkan angka ke-"<<i+1<<":";
		cin>>nomer[i];
	}
	cout<<"Angka terbesar: "<<max(nomer)<<endl;
	cout<<"Angka terkecil: "<<min(nomer)<<endl;
}
