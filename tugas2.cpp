using namespace std;
#include <iostream>
#include <math.h>
#include<vector>
#include "integral.hpp"
/*FUNGSI OPERASI PENJUMLAHAN*/
void penjumlahan(){
 int a,b;
 cout<<"angka pertama: ";
 cin>>a;
 cout<<"angka kedua: ";
 cin>>b;
 cout<<"hasil: "<<a+b<<"\n";
}
/*FUNGSI OPERASI PENGURANGAN*/
void pengurangan(){
 double a,b;
 cout<<"angka pertama: ";
 cin>>a;
 cout<<"angka kedua: ";
 cin>>b;
 cout<<"hasil: "<<a-b<<"\n";
}
/*FUNGSI OPERASI PEMBAGIAN*/
void pembagian(){
 double a,b;
 cout<<"angka pertama: ";
 cin>>a;
 cout<<"angka kedua: ";
 cin>>b;
 cout<<"hasil: "<<a/b<<"\n";
}
/*FUNGSI OPERASI PERKALIAN*/
void perkalian(){
 double a,b;
 cout<<"angka pertama: ";
 cin>>a;
 cout<<"angka kedua: ";
 cin>>b;
 cout<<"hasil: "<<a*b<<"\n";
}
/*FUNGSI OPERASI PANGKAT*/
void pangkat(){
 double a,b;
 cout<<"bilangan pokok: ";
 cin>>a;
 cout<<"pangkat: ";
 cin>>b;
 cout<<"hasil: "<<pow(a,b)<<"\n";
}

int main(){
 int i = 1 ;
 do {
	/*User menginput operasi yang hendak dijalankan program*/
  int operation;
  cout<<"Input Angka Operasi\n(1)Penjumlahan\n(2)Pengurangan\n(3)Perkalian\n(4)Pembagian\n(5)Pangkat\n(6)Integral\n";
  cin>>operation;
  switch (operation) {
    case 1:
      cout << "Kalkulator Penjumlahan\n";
      penjumlahan();
      cout<<"Tekan angka apa saja untuk melanjutkan program, tekan 0 untuk exit program\n";
   	  cin>>i;
      break;
    case 2:
      cout << "Kalkulator Pengurangan\n";
      pengurangan();
      cout<<"Tekan angka apa saja untuk melanjutkan program, tekan 0 untuk exit program\n";
	  cin>>i;
      break;
    case 3:
      cout << "Kalkulator Perkalian\n";
      perkalian();
      cout<<"Tekan angka apa saja untuk melanjutkan program, tekan 0 untuk exit program\n";
   	  cin>>i;
      break;
    case 4:
      cout << "Kalkulator Pembagian\n";
      pembagian();
      cout<<"Tekan angka apa saja untuk melanjutkan program, tekan 0 untuk exit program\n";
   	  cin>>i;
      break;
    case 5:
      cout << "Kalkulator Pangkat\n";
      pangkat();
      cout<<"Tekan angka apa saja untuk melanjutkan program, tekan 0 untuk exit program\n";
   	  cin>>i;
      break;
    case 6:
      cout << "Kalkulator Integral\n";
      integral();
      cout<<"Tekan angka apa saja untuk melanjutkan program, tekan 0 untuk exit program\n";
   	  cin>>i;
    default:
      cout << "Invalid Input\n";
      cout<<"Tekan angka apa saja untuk melanjutkan program, tekan 0 untuk exit program\n";
   	  cin>>i;
      break;
   }
}
while (i!=0);
/*program akan terus berjalan selama user tidak menekan angka 0*/
};
