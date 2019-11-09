#include <iostream>
using namespace std;

int pelicula(int a){
    //""" para presentar peliculas """
    if (a == 1){
        cout<<"La pelicula de hoy es: Alita Battle Angel, 6:35PM, Subtitulada"<<endl;
    }
    if (a == 2){
        cout<<"La pelicula es Joker, 4PM, Doblada"<<endl;
    }
    if (a == 3){
        cout<<"La pelicula es Aladin, 9PM, Subtitulada"<<endl;
    }
    if (a == 4){
        cout<<"La pelicula es Frozen 2, 7PM, Doblada"<<endl;
    }
}

int comida(){
string x;
int a;
   // """ funcion para comidas"""
    cout<<"Quiere comida el combo cuesta $4.50: S/N ";
    cin>>x;
    if (x == "s"){
        cout<<"Elija un menu del 1-4";
        cin>>a;

        if (a == 1){
            cout<<"Popcorn, nachos y soda mediana\n"<<endl;
        }
        if (a == 2){
            cout<<"Nachos, hotdog y soda grande \n"<<endl;}
        if (a == 3){
            cout<<"Hotdog, Popcorn y soda peque \n"<<endl;}
        if (a == 4){
            cout<<"Combo de comida del dia\n"<<endl;
            }
            }
    if (x == "n"){
        cout<<("No quiere combo \n")<<endl;
    }
}

int main(){
    int opcion;

    while (opcion != 9){
    cout<<"Menú en cpp"<<endl;
    cout<<"Selecciona una opción"<<endl;
    cout<<"\t1 - primera opción"<<endl;
    cout<<"\t2 - segunda opción"<<endl;
    cout<<"\t3 - tercera opción"<<endl;
    cout<<"\t4 - cuarta opcion"<<endl;
    cout<<"\t9 - salir"<<endl;
    cin>>opcion;
      if (opcion==9){
        cout<<"Ha salido del menu. Bye!"<<endl;
      }
   else {
    pelicula(opcion);
    comida();
   }
    }
    }



