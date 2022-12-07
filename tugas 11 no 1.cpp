#include <iostream>
using namespace std;

int main(){
    int bilangan;
    int *hasil = &bilangan;

    cout << "Masukkan Bilangan : " ;
    cin >> bilangan;
    cout << &bilangan << endl;

    if ((*hasil)%2 == 1){
    cout << *hasil <<" Merupakan bilangan ganjil.";
    } else {
    cout << *hasil <<" Merupakan bilangan genap.";
    }

    return 0;
}