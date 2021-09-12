//Programa 3 de la tarea 3
/*Programa que dado un numero entero se dibujo un patron con asteriscos
en forma de triangulo rectangulo en diferentes posiciones*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Digite la base:\n";cin>>n;
    for (int i=n;i>0;i--){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<"\n\n";
    }
    for (int i=1;i<=n;i++){
        for(int j=n-i;j>0;j--){
            cout<<" ";
        }
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<"\n\n";
    }
    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<"\n\n";
    }
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            cout<<"*";
        }
        cout<<"\n\n";
    }

    return 0;
}
