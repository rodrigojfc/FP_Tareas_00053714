    #include <iostream>
    using namespace std;
    int main() {
        int sumDigit = 0; //contador
        int numEntero, rest; //numero
        int cantNum;

        cout<<"Cuantas divisiones desea realizar: ";
        cin>>cantNum;
        for (int i=1; i <= cantNum ;i++ ){
            cout<<"Ingrese dividendo: ";
            cin>>numEntero;
            cout<<"Ingrese divisor: ";
            cin>>rest;
            sumDigit = numEntero / rest;
            cout<<"El resultado de la division es: "<<sumDigit<<endl;
        }
        cout<<"Bye"<<endl;
    }
