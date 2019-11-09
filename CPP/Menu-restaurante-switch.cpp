#include <iostream>
using namespace std;

int menu_restaurante(int a){
 switch (a){
 case 1:
     cout << "Opciones: Tipico, Tamales, Atole\n"<<endl;
     break;
 case 2:
     cout << "Opciones: Lasaña de pollo, Pizza personal, Hamburguesa\n"<<endl;
     break;
 case 3:
     cout << "Opciones: Pupusas, Cereal con leche, Avena, Ensalada de frutas\n"<<endl;
     break;
 case 4:
     cout << "Opciones: Budin, Cheesecake, Empanadas, Dulces tipicos\n"<<endl;
     break;
 case 5:
     cout << "Opciones: Deditos de queso, Papas con chilli, Quesadillas, Pan con ajo\n"<<endl;
     break;
 case 6:
    break;
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
