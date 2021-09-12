//Programa 16
//Programa que da tres funciones para opcion al usuario.
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float x;
    char opc;
    cout<<"\nPrograma que evalua x en una de tres funciones matematica a elegir\n";
    cout<<"\nMENU\n";
    cout<<"\nA. f(x)=x^2\n";
    cout<<"\n\B. f(x)=cos(x)\n";
    cout<<"\nC. f(x)=sen(x)\n";
    cout<<"\nDigite la opcion que ha elegido:";cin>>opc;
    cout<<"\nDigite la x a evaluar en f(x):\n\tx=";cin>>x;cout<<"\n\n";
    switch(opc){
    case 'A':
        cout<<"f(x)=x^2="<<x*x;
    break;
    case 'B':
        cout<<"f(x)=cos(x)="<<cos(x);
        break;
    case 'C':
        cout<<"f(x)=sen(x)="<<sin(x);
        break;
    default:
        cout<<"Opcion no valida";
    }
    cout<<"\n\n";
return 0;
}
