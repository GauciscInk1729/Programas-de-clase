//Programa 34
#include<iostream>
using namespace std;
int main(){
    int n,p=0,q=1,i=0;
    cout<<"Programa que imprime pares e impares menores o iguales a un numero dado por el usario\n";
    cout<<"Dame el numero hasta donde quieres que se impriman los numeros los pares e impares\n";
    cin>>n;
    cout<<"\n";
    do{
        cout<<"\t"<<p;
        p+=2;
        i++;
    }while(n>=p);
    cout<<"\n El total de numeros pares es:"<<i<<"\n\n";
    i=0;
    do{

        cout<<"\t"<<q;
        q+=2;
        i++;
    }while(n>=q);
    cout<<"\n El total de numeros impares es:"<<i<<"\n\n";
    return 0;
}
