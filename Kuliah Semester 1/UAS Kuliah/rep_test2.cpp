#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int angka_rahasia = rand() % 90 + 1;
  int tebakan;

  // Perulangan
  while (tebakan != angka_rahasia) {
    // Input tebakan
    cout << "Tebak angka: ";
    cin >> tebakan;

    // Cek tebakan
    if (tebakan < angka_rahasia) {
      cout << "Tebakan terlalu kecil" << endl;
    } else if (tebakan > angka_rahasia) {
      cout << "Tebakan terlalu besar" << endl;
    } else {
      cout << "Tebakan benar!" << endl;
    }
  }

  return 0;
}
