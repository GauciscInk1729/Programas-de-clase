//Programa 26
//Este programa utiliza la instruccion break para salir de un ciclo
#include <iostream>
using namespace std;

int main(){
    int contador;
    cout<<"Programa que ejemplifica el uso de la instruccion break\n";
    for (contador=1;contador<=10;contador++){
        if(contador==5)break;
        cout<<contador<<endl;
    }
    cout<<"\nbreak rompe el ciclo en contador="<<contador;
    return 0;
}
