#include<iostream>
#include<cmath>

using namespace std;
int main(){
	int opsi;
	char ulang;
	const double phi = 3.141592;
	double = r, lkar, kelkal;
	double = alas, depan, miring;
	//depan = t segitiga
	double = s, alasjar, atasjar;
	double = kelmas, lmas, volmas, lpmas;
	double = kelcut, lmas, volcut;
	double = ljar, keljar;
	
	do{
		cout<<"-----------------MENU MATEMATIKA---------------"<<endl;
		cout<<" 1. Luas Permukaan dan Keliling Limas Segiempat"<<endl;
		cout<<" 2. Luas dan Keliling Kerucut                  "<<endl;
		cout<<" 3. Volume Kerucut                             "<<endl;
		cout<<" 4. Volume Limas Segiempat                     "<<endl;
		cout<<" 5. Luas dan Keliling Jajar Genjang            "<<endl;
		cout<<"-----------------------------------------------"<<endl<<endl;
		cout<<"               SILAHKAN PILIH MENU :           ";
		cin>>opsi;
		system("cls");
		switch(opsi){
			case 1:
				cout<<"--------------------------------------"<<endl;
				cout<<"  LUAS PERMUKAAN DAN KELILING LIMAS SEGIEMPAT   "<<endl;
				cout<<"--------------------------------------"<<endl<<endl;
				cout<<"  Masukkan nilai alas : ";
				cin>>alas;

				break;
			case 2:
				
				break;
			case 3:
				
				break;
			case 4:
				
				break;
		default:
			cout<<"Opsi yang dipilih tidak tersedia!"<<endl;
			cout<<"Silahkan pilih opsi matematika sesuai menu!"<<endl;
		}
	cout<<"Ingin proses kembali (y/t)? : ";
	cin>>ulang;
	cout<<endl;
	system("cls");
	}
	
	while(ulang!= 't');
	cout<<"Terimakasih!"<<endl;
}