#include <iostream>
using namespace std;
#define harga 4500.02

int main(void)
{ float jumlah,total;
  cout << "Masukan jumlah barang =";
  cin >> jumlah;
  total=harga*jumlah;
  cout << "\nYang harus dibayar ="<<total;
}