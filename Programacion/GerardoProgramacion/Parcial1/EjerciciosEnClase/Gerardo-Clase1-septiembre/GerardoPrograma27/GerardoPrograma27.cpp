//Programa 27
#include <iostream>
using namespace std;

int main(){
    int producto=1,i,t;
    cout<<"\nProducto que encuentra la primera potencia de 2 mayor a 1000\n";
    cout<<"Dame la iteraciones a realizar\n\n";
    cin>>t;
    for(i=1;i<=t;i++){
        producto*=2;
        if(producto>=1000){
                cout<<"La primera potencia de 2 mayor a 1000 es: 2^"<<i<<"="<<producto<<endl;
                break;
        }
    }
    if(producto<1000){
        cout<<"No se encontro la primera potencia de 2 mayor a 1000 con este numero de iteraciones\n";
    }
    return 0;
}
