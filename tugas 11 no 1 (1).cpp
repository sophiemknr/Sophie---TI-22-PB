#include <iostream>
using namespace std;
int main (){
  int s,*number;
  number=&s;
  *number=200;

  cout << *number <<" ";
  (*number)++;
  cout << *number <<" ";
  (*number)--;
  cout << *number <<"\n";

  getchar();
  }
