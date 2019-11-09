#include <iostream>
using namespace std;

int menu_restaurante(int a){

        if(a==1){
                cout << "Opciones: Tipico, Tamales, Atole\n"<<endl;
            }
        if(a==2){
                cout << "Opciones: Lasaña de pollo, Pizza personal, Hamburguesa\n"<<endl;
            }
        if(a==3){
                cout << "Opciones: Pupusas, Cereal con leche, Avena, Ensalada de frutas\n"<<endl;
            }
        if(a==4){
                cout << "Opciones: Budin, Cheesecake, Empanadas, Dulces tipicos\n"<<endl;
            }
        if(a==5){
                cout << "Opciones: Deditos de queso, Papas con chilli, Quesadillas, Pan con ajo\n"<<endl;
            }
}

int main()
{
    int orden;
    while (orden != 6){
    cout << "¿Qué desea ver (ingrese el número)?\n";
    cout << "Desayuno (1) \nAlmuerzo (2) \nCena (3) \nPostre (4) \nAntojo (5)\n Salir(6)\n";
    cin>>orden;
    menu_restaurante(orden);
    }

    return 0;
}
