#include <iostream>

using namespace std;

int main()
{
	// deklarasi variabel
	int p;
	int data[100];
	int total = 0;
	
	// input batas akhir jumlah data yang akan dilooping
	cout<<"\n\t\t Masukkan Jumlah Pernyataan Kuesioner: ";
	cin>>p;
	
	// mulai algoritma repetition, menggunakan 'for' looping
	for(int i=0; i<p; i++)
	{
		cout<<"\n\t Masukkan Nilai Jawaban Pernyatan Ke-"<<i+1<<": ";
		cin>>data[i];
		total += data[i];
	}
	
	float sum = total/p;
	cout<<"\n\t\t Nilai Rata-rata Pernyatan Variabel Y: "<<sum<<endl;
	
	return 0;
}