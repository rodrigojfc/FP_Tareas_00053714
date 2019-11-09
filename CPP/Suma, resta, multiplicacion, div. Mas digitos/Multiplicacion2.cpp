    #include <iostream>
    using namespace std;
    int main() {
        int sumDigit = 1; //contador
        int numEntero, rest = 0; //numero
        int cantNum;

        cout<<"Ingrese cantidad de numeros a multiplicar: ";
        cin>>cantNum;
        for (int i=1; i <= cantNum ;i++ ){
            cout<<"Ingrese numero entero: ";
            cin>>numEntero;
            sumDigit = sumDigit * numEntero;
        }
        cout<<"El resultado de la multiplicacion es: "<<sumDigit<<endl;

    }
