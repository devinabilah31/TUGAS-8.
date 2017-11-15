#include<iostream>
using namespace std;

void getPrime(int length);

main()
{
	int panjang=0;
	cout<<"Masukkan angka: ";
	cin>>panjang;
	
	getPrime(panjang);
}
void getPrime(int length)
{
	int limit=0, angka=1, prima[length], totBagi=0;
	
	while(limit<length){
		totBagi=0;
		
		for(int i=1;i<=angka;i++){
			if(angka%i==0){
				totBagi++;
			}
		}
		if(totBagi==2){
			prima[limit]=angka;
			limit++;
		}
		angka++;
	}
	cout<<"Bilangan prima= "<<endl;
	for(int i=0;i<length;i++){
		cout<<prima[i]<<endl;
	}
}
