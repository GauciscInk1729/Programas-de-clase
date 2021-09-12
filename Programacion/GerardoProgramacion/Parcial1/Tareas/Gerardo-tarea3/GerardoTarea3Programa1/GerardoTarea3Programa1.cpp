//Programa 1 de la tarea 3
//Este programa calcula el factorial de un numero entero positivo dado n
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Digite el n:";cin>>n;
    if(n==0){
        cout<<"n!=1";
        return 0;
    }
    for(int i=n;i>1;i--){
        n*=i-1;
    }
    cout<<"n!="<<n;
    return 0;
}
