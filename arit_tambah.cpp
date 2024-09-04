#include <iostream>
using namespace std;

class komb14{
    public :
        int a,b,c;
};
int main(){
    komb14 komting;
    cout << "bil 1 : ";
    cin >> komting.a;
    cout << "bil 2 : ";
    cin >> komting.b;
    cout << "bil 3 : ";
    cin >> komting.c;
    cout << "Hasil = " << komting.a + komting.b + komting.c;

    return 0;
}