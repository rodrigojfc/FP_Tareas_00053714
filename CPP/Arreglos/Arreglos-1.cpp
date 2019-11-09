#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
 int catNumeros = 5;
 int numeros[catNumeros];
 for (int i = 0; i < catNumeros; i++){
   //numeros[i] = i + 1;
   cout<<"Ingrese el dato: "<<(i + 1)<<endl;
   cin>>numeros[i];
 }
}
