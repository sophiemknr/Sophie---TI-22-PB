#include <iostream>
using namespace std;

int main(){
	
	double r,t,l,v;
	double phi=3.14;
	
	cout<<"Masukan jari-jari : ";
	cin>>r;
	cout<<"Masukan tinggi : ";
	cin>>t;
	
	//Hitung volume tabung
	v=(phi*t*(r*r));
	
	cout<<endl;
	cout<<"Volume tabung : "<<v<<endl;

  return 0;
}