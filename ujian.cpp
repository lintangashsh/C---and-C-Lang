#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int i = 3, j = 2, k = 2;

    if(i > 0){
        if(j <= 0){
            if(k < 0)
                k++;
            if(k <= 0)
                k--;
        }
        if(j > 0)
            i++;

    }
    if(i <= 0)
        j++;
    
    int a = 3, b = ++a, c = ++a;
    
    k = i + j +k;
    cout << k << endl;
    cout << c << b << a;
}
