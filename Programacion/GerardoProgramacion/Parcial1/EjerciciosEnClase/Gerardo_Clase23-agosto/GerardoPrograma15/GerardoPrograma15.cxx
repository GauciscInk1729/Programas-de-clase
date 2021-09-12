//Programa 15
#include <iostream>
#define pi 3.1416
using namespace std;

int main(){
    float b,h,l,r;
    char opc;
    cout<<"Programa que calcula las areas de diferentes figuras geometricas\n";
    cout<<"\n\tMENU\n";
    cout<<"\nA.- El area del circulo\n";
    cout<<"\nB.-El area del cuadrado\n";
    cout<<"\nC.-El area del rectangulo\n";
    cout<<"\nD.-El area de un triangulo\n";
    cout<<"\nDame la letra de la opcion que has elegido\n";
    cin>>opc;

    switch(opc){
    case 'A':
        cout<<"\nDame el radio del circulo\n";
        cin>>r;
        cout<<"\nEl area del circulo es:"<<(pi*r*r);
        break;
    case 'B':
        cout<<"\nDame el lado del cuadrado\n";
        cin>>l;
        cout<<"\nEl area del cuadrado es:"<<l*l;
        break;
    case 'C':
        cout<<"\nDame la base y altura del rectangulo\n";
        cin>>b>>l;
        cout<<"\nEl area del rectangulo es:"<<b*l;
    case 'D':
        cout<<"\nDame la base y altura del triangulo\n";
        cin>>b>>l;
        cout<<"\nEl area del triangulo es:"<<b*l/2;
    default:
        cout<<"\nOpcion no valida.";
    }
    return 0;
}
