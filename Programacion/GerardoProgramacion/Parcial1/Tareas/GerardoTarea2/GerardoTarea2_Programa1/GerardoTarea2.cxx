//Programa que calcula las raices de una ecuacion cuadratica
#include <iostream>
#include <math.h>
using namespace std;
float a,b,c,discriminante;
int main(){
    cout<<"Programa que calcula las raices de una ecuacion cuadratica de la forma:\nax^2+bx+c=0\n";
    cout<<"Ingrese el coeficiente a:";cin>>a;
    cout<<"Ingrese el coeficiente b:";cin>>b;
    cout<<"Ingrese el coeficiente c:";cin>>c;
    discriminante=b*b-4*a*c;
    if(b<0){
        cout<<"La ecuacion no tiene soluciones reales.";
    }else{
        cout<<"Las soluciones son:\nx_1="<<(-b+sqrt(discriminante))/(2*a)<<"\nx_2="<<(-b-sqrt(discriminante))/(2*a);
    }
    return 0;
}
