#include <iostream>

int main()
{
	// declaración de variables.
	int NumeroA;
	int NumeroB;
	int Multiplicacion;

	//Solicitud de números enteros.
	std::cout<<"Introduzca el primer entero:\n";
	std::cin>>NumeroA;
	std::cout<<"Introduzca el segundo entero:\n";
	std::cin>>NumeroB;

	//Multiplicacion de los dos dígitos
	Multiplicacion=NumeroA*NumeroB;
	std::cout<<"El resultado de la multiplicacion es:"<<Multiplicacion<<::std::endl;

	return 0;
}
