#include<stdio.h>
using namespace std;

 void contoh(int *a, int *b){
 *a+=2;
 *b+=3;
 
 printf("\nnilai dalam fungsi = %i ",*a);
 printf("\nnilai dalam fungsi = %i ",*b); }
 
 int main() 
{
int c=3;
int d=3;
  printf("nilai sebelum digunakan = %i ",c);
  printf("\nnilai sebelum digunakan = %i ",d);
   contoh(&c , &d);

  printf("\nnilai sesudah digunakan = %i ",c);
  printf("\nnilai sesudah digunakan = %i ",d);
  
 }
