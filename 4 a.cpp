#include<iostream>
using namespace std;

void isiMatriks(int matriks[3][3]);
void hitungMatriks(int matriks1[3][3], int matriks2[][3]);

int main()
{
	int matriks1[3][3];
	int matriks2[3][3];
	
	cout<<"Matriks ke-1: "<<endl;
	isiMatriks(matriks1);
	cout<<"Matriks ke-2: "<<endl;
	isiMatriks(matriks1);
	
	hitungMatriks(matriks1, matriks2);
}
void isiMatriks(int matriks[3][3])
{
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>matriks[i][j];
		}
	}
}
void hitungMatriks(int matriks1[3][3], int matriks2[][3]){
	int hasil[3][3];
	int temp;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			temp=0;
			for(int k=0;k<3;k++){
				temp+=matriks1[i][k] * matriks2[k][j];
				
			}
			hasil[i][j]=temp;
		}
	}
	cout<<"Hasil kali= "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<hasil[i][j]<<"  ";
		}
		cout<<endl;
	}
}

