#include<iostream>
using namespace std;

int getfibbo(int n){
	int awal = 1, akhir = 1, fibbo, sum = 0;

	for(int i=0; i<n; i++){
		if(i==0||i==1)
			fibbo = 1;
		else {
			fibbo = awal + akhir;
			awal = akhir;
			akhir = fibbo;
		}
		sum += fibbo;
		cout<<fibbo<<endl;
	}
	return sum;
}
float getavarage(int sum, int n){
	return sum/n;
}
main(){
	int n;
	cout<<"masukkan n;";
	cin>>n;
	cout<<endl;
	
	int sum = getfibbo(n);
	cout<<endl<<"rata ratanya:"<<getavarage(sum, n);
}
