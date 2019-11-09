#include <iostream>

int main(){
    int canNumeros;
    std::cout<<"Ingrese el tamano del arreglo en tuplas: "<<std::endl;
    std::cin>>canNumeros;

    float a[canNumeros];
    float b[canNumeros];

    for (int i = 0; i < canNumeros; i++){
        std::cout<<"Ingrese tupla "<<i+1<<std::endl;
        std::cin>>a[i];
        std::cin>>b[i];
    }
}
