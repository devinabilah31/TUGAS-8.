
#include<iostream>
using namespace std;

main(){
	int terbesar, terkecil, angka[10];
	
	for(int i = 0; i<10; i++){
		cout<<"angka ke-"<<i + 1<<": ";
		cin>>angka[i];
		
		if(i == 0) {
			terbesar = angka[0];
			terkecil = angka[0];
		}
		else if(angka[i] > terbesar){
			terbesar = angka[i];
		}
		else if(angka[i] < terkecil){
			terkecil = angka[i];
		}
	}
	cout<<"hasil terbesar * terkecil = "<<terbesar*terkecil<<endl;
	return 0;
}
