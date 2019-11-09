#include <iostream>
using namespace std;
int main(){
    int canNumeros;
    int num_estudiantes;
    int cont = 0;
    int cont2 = 0;
    cout<<"Ingrese la cantidad de estudiantes: "<<endl;
    cin>>num_estudiantes;
    cout<<"Ingrese la cantidad de notas: "<<endl;
    cin>>canNumeros;

    float notas[canNumeros];
    float ponderaciones[canNumeros];
    float sumaProducto = 0.0, sumaPonderaciones = 0.0;
    float matriz_estudiantes[num_estudiantes][1];
    float suma = 0.0;


    cout<<"Ingrese sus notas y sus ponderaciones"<<endl;
    for (int i = 0; i < num_estudiantes; i++ ){
    for (int i = 0; i < canNumeros; i++){
        cout<<"Ingrese su nota y ponderacion de alumno "<<cont+1<<endl;
        cin>>notas[i];
        cin>>ponderaciones[i];
        sumaProducto = sumaProducto + (notas[i]*ponderaciones[i]);
        sumaPonderaciones = sumaPonderaciones + ponderaciones[i];

    }
    matriz_estudiantes[i][0]= sumaProducto/ sumaPonderaciones;
    cont += 1;
}
for (int i = 0; i < num_estudiantes; i++){
    cout<<cont2 + 1<<" - "<<matriz_estudiantes[i][0] << endl;
    cont += 1;
}

}
