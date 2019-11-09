#include <iostream>

int main(){
    int canNumeros;
    std::cout<<"Ingrese la cantidad de notas: "<<std::endl;
    std::cin>>canNumeros;

    float notas[canNumeros];
    float ponderaciones[canNumeros];
    float sumaProducto = 0.0, sumaPonderaciones = 0.0;

    float suma = 0.0;

    std::cout<<"Ingrese sus notas y sus ponderaciones"<<std::endl;

    for (int i = 0; i < canNumeros; i++){
        std::cout<<"Ingrese su nota y ponderacion: "<<std::endl;
        std::cin>>notas[i];
        std::cin>>ponderaciones[i];
        sumaProducto = sumaProducto + (notas[i]*ponderaciones[i]);
        sumaPonderaciones = sumaPonderaciones + ponderaciones[i];

    }
    std::cout<<"El promedio es: "<< sumaProducto/ sumaPonderaciones << std::endl;
}
