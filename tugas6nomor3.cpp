#include <iostream>
#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

int main(){
  char a1[20],a2[20];

  cout << "Kalimat 1 = ";
  cin >> a1;
  cout << "Kalimat 2 = ";
  cin >> a2;

  strcat(a1,a2);
  cout << "Menjadi : "<< a1;
  getchar();
}