#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// deklarasi variabel
	fstream data;
	int kode;
	int k;
	int token=0;
	string nama;
	string n;
	float harga;
	float h;
	
	// menampilkan tampilan dan input
	cout<<"\n\t\t Tambah Produk   ";
    cout<<"\n\t Kode Produk ";
    cin>>kode;
    
    cout<<"\n\t Nama Produk ";
    cin>>nama;
        
    cout<<"\n\t Harga Produk ";
    cin>>harga;
	
	// proses data, menggunakan database simple dalam bentuk .txt
	//data.open("data.txt", ios::in);
	data.open("data.txt", ios::app|ios::out);
	data<<" "<<kode<<" "<<nama<<" "<<harga<<" "<<"\n";
	data.close();
	
	
//	// proses program
//	if(!data)
//	{
//		data.open("data.txt", ios::app|ios::out);
//		data<<" "<<kode<<" "<<nama<<" "<<harga<<" "<<"\n";
//		data.close();
//	}
//	else
//	{
//		data>>k>>n>>h;
//		
//		while(!data.eof())
//		{
//			if(k==kode)
//			{
//				token++;
//			}
//			data>>k>>n>>h;
//		}
//		data.close();
//		
//		if(token==1)
//			cout<<"\n\t\t Data Sudah Ada! ";
//		else
//		{
//			data.open("data.txt", ios::app|ios::out);
//			data<<" "<<kode<<" "<<nama<<" "<<harga<<"\n";
//			data.close();
//			cout<<"\n\t\t Data Berhasil Ditambahkan ";
//		}
//	}
}