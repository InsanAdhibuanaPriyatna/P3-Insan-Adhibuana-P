#include <stdio.h>
#include <string.h>
using namespace std;

int contoh (int a);
int main (){
	int b;
	b= contoh (10);
	printf("hasil = %i",b);

}
int contoh (int a){
	return (a*=5);
}
