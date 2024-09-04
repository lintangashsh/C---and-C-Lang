#include <iostream>
#include <cmath>

using namespace std;

const double phi = 3.14;

// menghitung luas lingkaran
double luasLingkaran(double r) {
   return phi * pow(r, 2);
}

// menghitung luas persegi panjang
double luasPersegiPanjang(double p, double l) {
   return p * l;
}

// menghitung luas permukaan kubus
double luasPerKubus(double sisi) {
   return 6 * pow(sisi, 2);
}

int main() 
{
    int choice;
    double r, p, l, sisi;

    cout << "Pilih Opsi Luas:\n";
    cout << "1. Luas Lingkaran\n";
    cout << "2. Luas Persegi Panjang\n";
    cout << "3. Luas Permukaan Kubus\n";
    cin >> choice;

    switch (choice) {
       case 1:
           cout << "Masukkan jari-jari lingkaran: ";
           cin >> r;
           cout << "Luas Lingkaran sebesar: " << luasLingkaran(r) << endl;
           break;
       case 2:
           cout << "Masukkan jumlah panjang: ";
           cin >> p;
           cout << "Masukkan jumlah lebar: ";
           cin >> l;
           cout << "Luas Persgi Panjang sebesar: " << luasPersegiPanjang(p, l) << endl;
           break;
       case 3:
           cout << "Masukkan jumlah sisi kubus: ";
           cin >> sisi;
           cout << "Luas Permukaan Kubus sebesar: " << luasPerKubus(sisi) << endl;
           break;
       default:
           cout << "Silahkan Pilih opsi.\n";
   }

   return 0;
}
