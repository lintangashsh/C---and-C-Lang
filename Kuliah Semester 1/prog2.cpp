#include <iostream>

using namespace std;

//ini untuk cin cout luas
int main()
{
    int panjang, lebar, luas;

    cout << "masukkan jumlah panjang = " << endl;
    cin >> panjang;

    cout << "masukkan jumlahh lebar = " << endl;
    cin >> lebar;

    luas = panjang * lebar;

    cout << "luasnya adalah = " << luas << endl;

    system("pause");
    return 0;
}