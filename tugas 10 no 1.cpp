#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>

using namespace std;
    
long int pangkat (long int x,long int y){

    if (y > 0){
        return (x * pangkat (x,y-1));
    } else {
        return 1; 
    }
}

int main(){
    long int x,y,hasil;
    cout << "Masukkan Nilai X : ";
    cin >> x;
    cout << "Masukkan Nilai Y : ";
    cin >> y;
    cout << "Hasil X pangkat Y adalah = "<<pangkat (x,y);

    return 0;
}