#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
 int catNumeros = 0;
 int numeros[catNumeros];
 float suma = 0;
 float promedio;
 cout<<"Ingrese tamaño del arreglo: ";
 cin>>catNumeros;
 for (int i = 0; i < catNumeros; i++){
   //numeros[i] = i + 1;
   cout<<"Ingrese el dato: "<<(i + 1)<<endl;
   cin>>numeros[i];
 }
  // mostrar contenido del arreglo

 for (int i = 0; i < catNumeros; i++){
   suma = numeros[i]+suma;
 }
 promedio = suma / catNumeros;
 cout<<"El promedio es: "<< promedio<<endl;
 }
