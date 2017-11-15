#include<iostream>
using namespace std;

int* getFibo(int x){
	int* fibo=new int[x];
	
	int jumlah;
	for(int i=0; i<x; i++){
		if(i==0 || i==1)
			jumlah=1;
		else
			jumlah=fibo[i-2] + fibo[i-1];
			
		fibo[i]=jumlah;
		}
		return fibo;
	}
		
float getRerata(int x){
	int sum=0;
	int* fibo= getFibo(x);
	
	for(int i=0;i<x;i++){
		sum+=fibo[i];
	}
	delete[] fibo;
	
	return sum/x;
}
main()
{
	int x;
	
	cout<<"Enter how many fibonacci numbers you want: ";
	cin>>x;
	
	cout<<endl;
	
	int* fibo= getFibo(x);
	
	for(int i=0;i<x; i++){
		cout<<fibo[i]<<endl;
	}
	
	cout<<endl<<"Their average is: "<<getRerata(x);
	
	delete[] fibo;

}
