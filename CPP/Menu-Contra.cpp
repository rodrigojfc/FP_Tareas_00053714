#include <iostream>

using namespace std;

int menu_contra(int a){

    switch(a){

        case 1:
        case 2:
        case 3:
        cout << "Error de credenciales"<<endl;
        break;
        case 4:
        cout << "Su conexión no es la adecuada"<<endl;
        break;
        case 5:
        cout << "Su cuenta no existe"<<endl;
        break;
        default:
        cout << "El número no es válido"<<endl;
        case 6:
            cout<<"Bienvenido!"<<endl;
            break;
    }

}

int main()
{
    int m;

    while (m!=6){
    cout << "Ingrese el caso del 1 al 6\n";
    cin >> m;
        menu_contra(m);
    }
    return 0;
}
