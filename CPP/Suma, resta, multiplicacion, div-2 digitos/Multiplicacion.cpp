#include <iostream>

int main()
{
	// declaraci�n de variables.
	int NumeroA;
	int NumeroB;
	int Multiplicacion;

	//Solicitud de n�meros enteros.
	std::cout<<"Introduzca el primer entero:\n";
	std::cin>>NumeroA;
	std::cout<<"Introduzca el segundo entero:\n";
	std::cin>>NumeroB;

	//Multiplicacion de los dos d�gitos
	Multiplicacion=NumeroA*NumeroB;
	std::cout<<"El resultado de la multiplicacion es:"<<Multiplicacion<<::std::endl;

	return 0;
}
