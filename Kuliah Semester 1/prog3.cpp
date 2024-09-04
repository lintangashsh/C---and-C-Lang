#include <iostream>
using namespace std;

// ini nguji yang di modul di bagian 'program 2' halaman 10
int main()
{
    long double radius;
    float area;

    radius = 20.19;
    const double PI = 3.14159999;

    area = radius * radius * PI;
    cout << "the area is: ";
    cout << area << endl;

    system("pause");
    return 0;
}