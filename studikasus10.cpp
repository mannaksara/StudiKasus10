#include<iostream>
using namespace std;

class mhs{
	public:
		void inputMhs();
		void outputMhs();
	private:
		string nama[100];
		int nim[20],*y;
		int k;
};
void mhs::inputMhs(){
	cout<<"Masukkan Jumlah Data : ";cin>>k;
	for(int i=1;i<=k;i++){
		y=&nim[i];
		cout<<"Masukkan Data ke-"<<i<<endl;
		cout<<"Masukkan Nama : ";cin>>nama[i];
		cout<<"Masukkan NIM : ";cin>>nim[i];
		cout<<endl;
	}
	cout<<"\n";
}

void mhs::outputMhs(){
	cout<<"==============================\n";
	for(int i=1;i<=k;i++){
		y=&nim[i];
		cout<<"Data ke-"<<i<<endl;
		cout<<"Nama : "<<nama[i]<<endl;
		cout<<"NIM : "<<nim[i]<<endl;
		cout<<"Alamat NIM : "<<y<<endl;
		cout<<"\n";
	}
}
int main(){
	mhs x;
	x.inputMhs();
	x.outputMhs(); 
	return 0;
}
