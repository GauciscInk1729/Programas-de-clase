//Programa 4 de la tarea 4
/*Programa que debe hace conversiones de medida de longitud
Mostrando el doble menu( Primero debe elegir la medida en la que se encuentra su longitud y despues
elegir en que medida la quiere transformar)*/
#include<iostream>
using namespace std;
int main(){
    float longitud,longitudTransformada;
    int medida1,medida2;
    char s;
    cout<<"Programa que debe hace conversiones de medida de longitud\n";
    do{
    cout<<"Digite la medida en que se encuentra su longitud";
    cout<<"\nMenu:\n\t 1)Metros(m)\n\t2)Kilometros(km)\n\t3)pies(ft)\n";
    cout<<"Digite el numero segun en que medida se encuentre su longitud:";cin>>medida1;
    cout<<"Ahora digite la longitud:";cin>>longitud;
    cout<<"\nMenu:\n\t 1)Metros(m)\n\t2)Kilometros(km)\n\t3)pies(ft)\n";
    cout<<"Digite el numero segun en que medida quiere convertir la anterior medida:";cin>>medida2;
    cout<<longitud;
    switch(medida1){
    case 1:
    cout<<"m=";
    if(medida2==2){
        cout<<longitud/1000<<"km\n";
    }else if(medida2==3){
        cout<<longitud*3.2808<<"ft";
    }
    cout<<longitud<<"m";
        break;
    case 2:
        cout<<"km=";
        if(medida2==1){
            cout<<longitud*1000<<"m";
        }else if(medida2==3){
            cout<<longitud*3280.84<<"ft";
        }
        cout<<longitud<<"km";
        break;
    case 3:
        cout<<"ft=";
        if(medida2==1){
            cout<<longitud/3.28084<<"m";
        }else if(medida2==2){
            cout<<longitud/3280.84<<"km";
        }
        cout<<longitud<<"ft";
        break;
    default:
        cout<<"Entradas no validas, por favor digite otra vez.";
    }
    cout<<"\n\nSi desea convertir otra longitud, por favor digite s,\nde otro modo, digite cualquier tecla.\n";
    cin>>s;
    }while(s=='s'||s=='S');
    cout<<"El programa ha finalizado :), have a good day.";
    return 0;
}
