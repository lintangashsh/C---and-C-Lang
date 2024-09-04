#include<iostream>
#include<cmath>

using namespace std;
int main(){
	int opsi;
	char ulang;
	float phi = 3.1428, lling, kelling, depan, miring, alas, kelsegi, lsegi;
	float tinggi, voltab, r, ljur, keljur, alpha, tbusur, pbusur;
	float apotema, ltembereng, keltembereng, ltiga;
	float sina, beta;
	do{
		cout<<"--------MENU MATEMATIKA--------"<<endl;
		cout<<"1. Luas dan Keliling Lingkaran"<<endl;
		cout<<"2. Luas dan Keliling Segitiga"<<endl;
		cout<<"3. Volume Tabung"<<endl;
		cout<<"4. Juring"<<endl;
		cout<<"-------------------------------"<<endl<<endl;
		cout<<"SILAHKAN PILIH MENU MATEMATIKA: ";
		cin>>opsi;
		system("cls");
		switch(opsi){
			case 1:
				cout<<"-----------------------------"<<endl;
				cout<<" LUAS DAN KELILING LINGKARAN "<<endl;
				cout<<"-----------------------------"<<endl<<endl;
				cout<<"Masukkan nilai R = ";
				cin>>r;
				//proses case 1
				lling = phi * r * r;
				kelling = phi * 2 * r;
				//end proses case 1
				cout<<"Luas lingkaran kamu adalah      = "<<lling<<endl;
				cout<<"Keliling lingkaran kamu adalah  = "<<kelling<<endl<<endl;
				break;
			case 2:
				cout<<"----------------------------"<<endl;
				cout<<" LUAS DAN KELILING SEGITIGA "<<endl;
				cout<<"----------------------------"<<endl<<endl;
				cout<<"Masukkan nilai alas = ";
				cin>>alas;
				cout<<"Masukkan nilai depan = ";
				cin>>depan;
				//proses case 2
				miring = sqrt (pow(depan, 2)+pow(alas, 2));
				lsegi = 0.5 * (alas * depan);
				kelsegi = alas + miring + depan;
				//end proses case 2
				cout<<"Sisi miring segitiga adalah = "<<miring<<endl;
				cout<<"Luas segitiga adalah        = "<<lsegi<<endl;
				cout<<"Keliling segitiga adalah    = "<<kelsegi<<endl<<endl;
				break;
			case 3:
				cout<<"-----------------------"<<endl;
				cout<<"     VOLUME TABUNG     "<<endl;
				cout<<"-----------------------"<<endl<<endl;
				cout<<"Masukkan nilai R = ";
				cin>>r;
				cout<<"Masukkan nilai tinggi = ";
				cin>>tinggi;
				//proses case 3
				voltab = phi * r * r * tinggi;
				//end proses case 3
				cout<<"Volume tabung adalah = "<<voltab<<endl<<endl;
				break;
			case 4:
				cout<<"--------------------------"<<endl;
				cout<<"          JURING          "<<endl;
				cout<<"--------------------------"<<endl<<endl;
				cout<<"   A. Luas Juring         "<<endl;
				cout<<"   B. Keliling Juring     "<<endl;
				cout<<"   C. Tali Busur          "<<endl;
				cout<<"   D. Busur Lingkaran     "<<endl;
				cout<<"   E. Apotema             "<<endl;
				cout<<"   F. Luas Tembereng      "<<endl;
				cout<<"   G. Keliling Tembereng  "<<endl;
				cout<<"--------------------------"<<endl<<endl;
				cout<<"Masukkan nilai R = ";
				cin>>r;
				cout<<"Masukkan sudut alpha = ";
				cin>>alpha;
				//proses case 4
				beta = (180 - alpha)/2;
				sina = sin (beta * phi / 180);
				ljur = (alpha / 360) * phi * r * r;
				pbusur = (alpha / 360) * 2 * phi * r;
				apotema = sina * r;
				tbusur = sqrt (pow(r,2) - pow(apotema,2)) * 2 ;
				keljur = pbusur + 2 * r;
				ltiga = 0.5 * tbusur * apotema;
				ltembereng = ljur - ltiga;
				keltembereng = pbusur + tbusur;
				//end proses case 4
				cout<<"   A. Luas Juring          = "<<ljur<<endl;
				cout<<"   B. Keliling Juring      = "<<keljur<<endl;
				cout<<"   C. Tali Busur           = "<<tbusur<<endl;
				cout<<"   D. Busur Lingkaran      = "<<pbusur<<endl;
				cout<<"   E. Apotema              = "<<apotema<<endl;
				cout<<"   F. Luas Tembereng       = "<<ltembereng<<endl;
				cout<<"   G. Keliling Tembereng   = "<<keltembereng<<endl;
				cout<<"-----------------------------"<<endl<<endl;
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