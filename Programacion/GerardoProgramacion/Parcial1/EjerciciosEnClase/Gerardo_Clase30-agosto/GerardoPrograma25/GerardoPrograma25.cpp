//Programa 25
//Este programa imprime los numeros pares menores o iguales a un entero positivo dado n
#include <iostream>

using namespace std;

int main(){
    int suma=0,n;
    cout<<"Digite n:";cin>>n;
    for (int i=2;i<=n;i+=2){
        suma+=i;
    }
    cout<<"\nLa suma de los numeros pares del 2 al 100 es:"<<suma<<endl;//2(n/2)(n/2+1)/2
    return 0;
}
