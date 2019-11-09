#include<iostream>
using namespace std;
int salario;

float horas_extra (float a){
float sal_extra;
sal_extra =salario + (3*a);
return sal_extra;
}

float descuentos_etc(float a){
float desc_isss, desc_afp, desc_in, desc_renta, sal_liq, prestamos;
desc_afp = a *(7.25/100);
if (a>=1000){
    desc_isss= 30;
}
else{
    desc_isss= a *(0.03);
}
desc_in = a - desc_afp - desc_isss;
cout<<"Descuento de seguro: $"<<desc_isss<<"\n";
cout<<"Descuento de AFP: $"<<desc_afp<<"\n";
if (desc_in <=472) {
    cout<<"Sin retencion de renta. Su Salario es: $"<<desc_in<<"\n";
}
else if (desc_in<=895.24){
    desc_in -=472;
    desc_in = desc_in * (0.10);
    desc_in +=17.67;
    cout<<"Descuento de renta es: $"<< desc_in<<"\n";
}
else if(desc_in <= 2038.10){
    desc_in -=895.24;
    desc_in = desc_in * (0.20);
    desc_in += 60;
    cout<<"Descuento de renta es: $"<< desc_in<<"\n";
}
else{
    desc_in -= 2038.10;
    desc_in = desc_in * (0.30);
    desc_in += 288.57;
    cout<<"Descuento de renta es: $"<< desc_in<<"\n";
}
sal_liq = a - desc_in - desc_afp - desc_isss;
cout<<"Ingresar pago a prestamos: $";
cin>>prestamos;
sal_liq -= prestamos;
cout<<"Su salario neto es: $" << sal_liq;
}

int main(){
float horas_xtra;
cout<<"Ingrese su salario: $";
cin>>salario;
cout<<"Ingrese horas extra: ";
cin>>horas_xtra;
descuentos_etc(horas_extra(horas_xtra));
cout<<"\n";
}
