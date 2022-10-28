#include <iostream>
#include <string.h>
using namespace std;
int main(){
  char a[]="FAKULTAS";
  char b[]=" PARIWISATA";
  char c[]=" DAN";
  char d[]=" TEKNOLOGI";
  char e[]=" INFORMASI";
  char huruf[]="FAKULTASPARIWISATADANTEKNOLOGIINFORMASI";
  
  cout<<a<<b<<c<<d<<e<<endl;
  cout<<"Huruf pada kalimat di atas berjumlah : "<<strlen(huruf);
  
getchar ();
}