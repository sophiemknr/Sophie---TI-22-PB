#include <iostream>
using namespace std;
int main()
{
   char nama[20];
   char hadiah[300];
   float NP1 = 0, NP2 =0, NP3=0, NR = 0, NT = 0;
   cout << "Program Hitung Nilai Rata-rata" << endl;

   {
   cout << "Nama Siswa : ";
   cin >> nama;
   cout << "Nilai Pertandingan I : ";
   cin >> NP1;
   cout << "Nilai Pertandingan II : ";
   cin >> NP2;
   cout <<"Nilai Pertandingan III : ";
   cin >> NP3;
   }
NR = (NP1+NP2+NP3)/3;
   cout << "Siswa yang bernama = " << nama << endl;
   cout << "memperoleh nilai rata-rata = " << NR << " dari hasil perlombaan yang diikutinya." << endl;

   if (NR >=85)
   {
   cout << "Hadiah yang didapat adalah " << hadiah << " Komputer Core i5" << endl;
         }
   else if (NR >=70)
       {
   cout << "Hadiah yang didapat adalah " << hadiah << " Uang sebesar Rp. 2.500.000" << endl;
       }
       else if (NR <70)
       {
       cout << "Hadiah yang didapat adalah " << hadiah << " Hadiah Hiburan" << endl;
         }
getchar();
}