#include <iostream>
using namespace std;

int main(){
int num1,num2,k;
cout<<"Ingrese numero de filas: ";
cin>>num1;
cout<<"Ingrese numero de columnas: ";
cin>>num2;
int mi_matriz[num1][num2];

 for (int i = 0;i < num1;i++){
    for (int j= 0; j < num2; j++){
        cout<<"Ingrese numero: ";
        cin>>mi_matriz[i][j];
    }
 }
 cout<<"Matriz superior"<<endl;
 for (int i = 0; i < num1; i++){
    for (int j = 0; j < num2; j++){
       if(i>j){
        cout<<"-";
       }
       else{
        cout<<mi_matriz[i][j];
       }
    }
    cout<<endl;
 }
 cout<<"Matriz inferior"<<endl;
 for (int i = 0; i < num1; i++){
    for (int j = 0; j < num2; j++){
       if(i<j){
        cout<<"-";
       }
       else{
        cout<<mi_matriz[i][j];
       }
    }
    cout<<endl;
 }

}
