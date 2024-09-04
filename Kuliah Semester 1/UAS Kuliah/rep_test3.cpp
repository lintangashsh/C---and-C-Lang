#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int n, data[100], total = 0;

  // Input data
  cout << "Masukkan jumlah data: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << "Masukkan data ke-" << i + 1 << ": ";
    cin >> data[i];
    total += data[i];
  }

  // Hitung rata-rata
  float rata_rata = total / n;

  // Tampilkan hasil
  cout << "Rata-rata: " << rata_rata << endl;

  return 0;
}
