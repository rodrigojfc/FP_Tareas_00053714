    #include <iostream>
    using namespace std;
    int main() {
        int sumDigit = 0; //contador
        int numEntero; //numero
        int cantNum;
        cout<<"Ingrese la cantidad de numeros a sumar: ";
        cin>>cantNum;
        for (int i=1; i <= cantNum ;i++ ){
            cout<<"Ingrese numero entero: ";
            cin>>numEntero;
            sumDigit = sumDigit + numEntero;
        }
       cout<<"El total es: " << sumDigit<<endl;
    }
