#include <iostream>

using namespace std;

int main()
{
	//deklarasi variabelnya
	string user;
	string password;
	
	cout<<"Masukkan Username anda!"<<endl;
	cin>>user;
	cout<<"Masukkan Password anda!"<<endl;
	cin>>password;
	
	// penggunaan algoritma selection, checking akun pengguna
	if(user=="lintang" && password=="Admin_123!!")
    {
        cout<<"Halo Lintang, sebagai admin Havivya";
    }
    else
    {
    	cout<<"Akun anda tidak ditemukan";
    }

	return 0;
}