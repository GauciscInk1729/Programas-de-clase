//Programa que calcula el pago de luz consumida en un hogar
/*Si el cliente a gastado 500 kW o menos se le cobra a  $0.2 el kW, sin
embargo si el cliente gasta más de los 500 kW, se le cobra a $1 el kW, desde donde excede los
500 kW.  */
#include <iostream>

using namespace std;

int main(){
    float kW;
    cout<<"Ingrese la cantidad de kW que ha gastado:";cin>>kW;
    cout<<"\nEl total a pagar es:";
    if(kW<=500){
        cout<<kW*0.2;
    }else{
        cout<<kW;
    }
    return 0;
}
