//Programa 31
#include <iostream>
using namespace std;

int main(){
    float x;
    int n,i=1;
    cout<<"Programa que evalua la funcion f(x)=1/x para x distinto de 0\n";
    cout<<"Imprime el numero de veces a repetir\n";cin>>n;
    while(i<=n){
        cout<<"Digite x:";cin>>x;
        if(x==0){
            cout<<"La funcion no esta definida en 0.\n";
        }else{
            cout<<"El valor de f(x)="<<1/x<<endl;
        }
        i++;
    }
    return 0;
}
