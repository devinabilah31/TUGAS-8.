#include<iostream>
using namespace std;

float rerataPlus(int inp[10], bool status);

int main()
{
	int inp[10];
	
	cout<<"Masukkan bil. = "<<endl;
	for(int i=0;i<10;i++){
		cin>>inp[i];
	}
	cout<<"Rata-rata angka positif: "<<rerataPlus(inp,true)<<endl;
	cout<<"Rata-rata angka negatif: "<<rerataPlus(inp, false)<<endl;
	
}
float rerataPlus(int inp[10], bool status)
{
	float positif=0, negatif=0, totPos=0, totNeg=0;
	
	for(int i=0;i<10;i++){
		if(inp[i]>0){
			positif+= inp[i];
			totPos++;
		}
		else{
			negatif+=inp[i];
			totNeg++;
		}
	}
	
	if(status){
		return positif/totPos;
	}
	else{
		return negatif/totNeg;
	}
}
