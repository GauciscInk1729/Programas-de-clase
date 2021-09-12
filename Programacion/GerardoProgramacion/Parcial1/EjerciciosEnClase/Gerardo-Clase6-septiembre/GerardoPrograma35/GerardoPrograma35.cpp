//Programa 35
#include<iostream>
using namespace std;
int main(){
    float k;
    char i;
    cout<<"Este programa convierte kg. a gr.\n";
    do{
        cout<<"Dame los kilogramos a convertir:";cin>>k;
        cout<<"Los "<<k<<" kilogramos a gramos son:"<<k*1000<<endl;
        cout<<"\nSi quieres continuar presiona s. de lo contrario presiona cualquier tecla:";
        cin>>i;
    }while(i=='s'||i=='S');
    cout<<"\nEl programa ha terminado\n";
    return 0;
}
