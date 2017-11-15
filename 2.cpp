#include<iostream>

using namespace std;

void getGenap (int panjang);

int main()
{
	int panjang=0;
	cout<<"n: ";
	cin>>panjang;
	
	getGenap(panjang);
}

void getGenap(int panjang)
{
	int angka[panjang];
	bool status = false;
	
	for(int i=0; i<panjang; i++){
		cout<<"Angka ke-"<<i+1<<"=";
		cin>>angka[i];
	}
	for(int i=0; i<panjang; i++){
		if(angka[i]%2==0){
			cout<<angka[i]<<endl;
			status=true;
			}
		}
		if(!status){
			cout<<"Even number not found in array"<<endl;
	
	}
}
