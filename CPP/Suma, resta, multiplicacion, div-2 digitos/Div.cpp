#include <iostream>

int main()
{
	// declaraci�n de variables.
	int NumeroA;
	int NumeroB;
	int Division;

	//Solicitud de n�meros enteros.
	std::cout<<"Introduzca el primer entero:\n";
	std::cin>>NumeroA;
	std::cout<<"Introduzca el segundo entero:\n";
	std::cin>>NumeroB;

	//Division de los dos d�gitos
	Division=NumeroA/NumeroB;
	std::cout<<"El resultado de la Division es:"<<Division<<::std::endl;

	return 0;
}
