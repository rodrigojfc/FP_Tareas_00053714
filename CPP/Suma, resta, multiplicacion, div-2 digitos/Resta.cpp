#include <iostream>

int main()
{
	// declaración de variables.
	int NumeroA;
	int NumeroB;
	int Resta;

	//Solicitud de números enteros.
	std::cout<<"Introduzca el primer entero:\n";
	std::cin>>NumeroA;
	std::cout<<"Introduzca el segundo entero:\n";
	std::cin>>NumeroB;

	//Resta de los dos dígitos
	Resta=NumeroA-NumeroB;
	std::cout<<"El resultado de la resta es:"<<Resta<<::std::endl;

	return 0;
}
