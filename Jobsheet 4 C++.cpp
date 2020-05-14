#include<iostream>
#include<stdio.h>

using namespace std;

void contoh(int a, int b){
 a+=5;
 b+=7; 
  
 cout<<" \nNilai a dalam fungsi = "<<a;
 cout<<" \nNilai b dalam fungsi = "<<b;
 }

 int main() 
{
int c=3;
int d=3;
  cout<<"\nNilai c sebelum digunakan  = "<<c;
  cout<<"\nNilai d sebelum digunakan  = "<<d;
   contoh(c , d);

  cout<<"\nNilai c setelah digunakan  = "<<c;
  cout<<"\nNilai d setelah digunakan  = "<<d;
  
 }
