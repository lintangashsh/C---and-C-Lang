#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int opsi;
    char ulang;
    const double phi = 3.141592;
    double r, lkar, kelkal;
    double alas, depan, miring;
    double s, alasjar, atasjar, tjar;
    double kelmas, lpmas, volmas;
    double kelcut, lcut, volcut;
    double tcut, kelker, lker, volker;
    double ljar, keljar;

    do {
        cout << "-----------------MENU MATEMATIKA---------------" << endl;
        cout << " 1. Luas Permukaan dan Keliling Limas Segiempat" << endl;
        cout << " 2. Luas Permukaan Kerucut                     " << endl;
        cout << " 3. Volume Kerucut                             " << endl;
        cout << " 4. Volume Limas Segiempat                     " << endl;
        cout << " 5. Luas dan Keliling Jajar Genjang            " << endl;
        cout << "-----------------------------------------------" << endl << endl;
        cout << "               SILAHKAN PILIH MENU :           ";
        cin >> opsi;
        system("cls");

        switch (opsi) {
            case 1:
                cout << "------------------------------------------------" << endl;
                cout << "  LUAS PERMUKAAN DAN KELILING LIMAS SEGIEMPAT   " << endl;
                cout << "------------------------------------------------" << endl << endl;
                cout << "  Masukkan nilai sisi alas : ";
                cin >> alas;
                cout << "  Masukkan nilai tinggi (depan) : ";
                cin >> depan;
                cout << "  Masukkan nilai sisi miring : ";
                cin >> miring;
                lpmas = alas * alas + 4 * 0.5 * alas * miring;
                kelmas = 4 * alas + 4 * miring;
                cout << "  Nilai miring : " << miring << endl;
                cout << "  Luas Permukaan Limas Segiempat : " << lpmas << endl;
                cout << "  Keliling Limas Segiempat : " << kelmas << endl;
                break;
            case 2:
                cout << "------------------------------------------" << endl;
                cout << "            LUAS PERMUKAAN KERUCUT        " << endl;
                cout << "------------------------------------------" << endl << endl;
                cout << "  Masukkan nilai jari-jari : ";
                cin >> r;
                cout << "  Masukkan nilai sisi miring : ";
                cin >> miring;
                lcut = phi * r * (r + miring);
                cout << "  Luas Permukaan Kerucut : " << lcut << endl;
                break;
            case 3:
                cout << "------------------------------------------------" << endl;
                cout << "                 VOLUME KERUCUT                " << endl;
                cout << "------------------------------------------------" << endl << endl;
                cout << "  Masukkan nilai jari-jari : ";
                cin >> r;
                cout << "  Masukkan nilai tinggi : ";
                cin >> tcut;
                volcut = 1.0 / 3.0 * phi * r * r * tcut;
                cout << "  Volume Kerucut : " << volcut << endl;
                break;
            case 4:
                cout << "------------------------------------------------" << endl;
                cout << "             VOLUME LIMAS SEGIEMPAT            " << endl;
                cout << "------------------------------------------------" << endl << endl;
                cout << "  Masukkan nilai sisi alas : ";
                cin >> alas;
                cout << "  Masukkan nilai tinggi : ";
                cin >> depan;
                volmas = 1.0 / 3.0 * alas * alas * depan;
                cout << "  Volume Limas Segiempat : " << volmas << endl;
                break;
            case 5:
                cout << "------------------------------------------------" << endl;
                cout << "           LUAS DAN KELILING JAJAR GENJANG     " << endl;
                cout << "------------------------------------------------" << endl << endl;
                cout << "  Masukkan nilai sisi alas : ";
                cin >> alasjar;
                cout << "  Masukkan nilai sisi atas : ";
                cin >> atasjar;
                cout << "  Masukkan nilai tinggi : ";
                cin >> tjar;
                keljar = 2 * (alasjar + atasjar);
                ljar = alas * tjar;
                cout << "  Keliling Jajar Genjang : " << keljar << endl;
                cout << "  Luas Jajar Genjang : " << ljar << endl;
                break;
            default:
                cout << "Opsi yang dipilih tidak tersedia!" << endl;
                cout << "Silahkan pilih opsi matematika sesuai menu!" << endl;
        }

        cout << "Ingin proses kembali (y/t)? : ";
        cin >> ulang;
        cout << endl;
        system("cls");
    } while (ulang != 't');

    cout << "Terimakasih!" << endl;
    return 0;
}