//Programa 20
#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Programa que imprime las primeras n raices cuadradas\nDigite n:";cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"La raiz cuadrada de "<<i<<" es "<<sqrt(i)<<endl;
    }
    return 0;
}

