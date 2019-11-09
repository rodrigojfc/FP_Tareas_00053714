    #include <iostream>
    using namespace std;
    int main() {
        int sumDigit = 0; //contador
        int numEntero, rest; //numero
        int cantNum;

        cout<<"Cuantas restas desea realizar: ";
        cin>>cantNum;
        for (int i=1; i <= cantNum ;i++ ){
            cout<<"Ingrese numero entero: ";
            cin>>numEntero;
            cout<<"Ingrese numero a restar: ";
            cin>>rest;
            sumDigit = numEntero - rest;
            cout<<"El resultado de la resta es: "<<sumDigit<<endl;
        }
    }
