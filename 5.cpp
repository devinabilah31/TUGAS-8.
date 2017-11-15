#include<iostream>
using namespace std;

bool perfectCek(int n){
	int jumlah=0;
	
	for(int i=0;i<n;i++)
		if(n%i==0)
			jumlah+=i;
			
		return jumlah==n;
	}

main(){
	int n;
	
	cout<<"Masukkan angka: ";
	cin>>n;
	
	bool status= perfectCek(n);
	
	if(status)
		cout<<"Given number is a perfect number";
	else
		cout<<"Given number is not a perfect number";
}

