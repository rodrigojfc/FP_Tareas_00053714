#include <iostream>

int main()
{
	// declaraci�n de variables.
	int NumeroA;
	int NumeroB;
	int Resta;

	//Solicitud de n�meros enteros.
	std::cout<<"Introduzca el primer entero:\n";
	std::cin>>NumeroA;
	std::cout<<"Introduzca el segundo entero:\n";
	std::cin>>NumeroB;

	//Resta de los dos d�gitos
	Resta=NumeroA-NumeroB;
	std::cout<<"El resultado de la resta es:"<<Resta<<::std::endl;

	return 0;
}
