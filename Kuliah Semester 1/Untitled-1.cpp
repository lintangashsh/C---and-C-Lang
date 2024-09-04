#include<iostream>
#include<cmath>

using namespace std;

int main(){
    float tambah, kurang, kali, bagi, a, b, c, d;
    cout<<"masukkan nilai a = ";
    cin>>a;
    cout<<"masukkan nilai b = ";
    cin>>b;
    cout<<"masukkan nilai c = ";
    cin>>c;
    cout<<"masukkan nilai d = ";
    cin>>d;
    tambah = a + b + c + d;
    kurang = a - b - c - d;
    kali = a * b * c * d;
    bagi = a / b / c / d;
    cout<<"maka nilai a+b+c+d = "<<tambah<<endl;
    cout<<"maka nilai a-b-c-d = "<<kurang<<endl;
    cout<<"maka nilai a*b*c*d = "<<kali<<endl;
    cout<<"maka nilai a:b:c:d = "<<bagi<<endl;
}