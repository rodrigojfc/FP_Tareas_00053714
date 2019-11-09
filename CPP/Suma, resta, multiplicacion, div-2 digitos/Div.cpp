#include <iostream>

int main()
{
	// declaración de variables.
	int NumeroA;
	int NumeroB;
	int Division;

	//Solicitud de números enteros.
	std::cout<<"Introduzca el primer entero:\n";
	std::cin>>NumeroA;
	std::cout<<"Introduzca el segundo entero:\n";
	std::cin>>NumeroB;

	//Division de los dos dígitos
	Division=NumeroA/NumeroB;
	std::cout<<"El resultado de la Division es:"<<Division<<::std::endl;

	return 0;
}
