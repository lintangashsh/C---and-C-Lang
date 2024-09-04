#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// deklarasi variabel
	fstream data;
	int kode;
	string nama;
	string kategori;
	float harga;
	
	// menampilkan tampilan dan input
	// penggunaan algoritma sequential
	cout<<"\n\t\t Tambah Produk   ";
    cout<<"\n\t Kode Produk ";
    cin>>kode;
    
    cout<<"\n\t Nama Produk ";
    cin>>nama;
        
    cout<<"\n\t Kategori Produk ";
    cin>>kategori;
    
    cout<<"\n\t Harga Produk ";
    cin>>harga;
	
	// proses data, menggunakan database simple dalam bentuk .txt
	data.open("data.txt", ios::app|ios::out);
	data<<" "<<kode<<" "<<nama<<" "<<kategori<<" "<<harga<<" "<<"\n";
	data.close();
	
	cout<<"\n\t\t Data Berhasil Ditambahkan ";
	
	return 0;
}


