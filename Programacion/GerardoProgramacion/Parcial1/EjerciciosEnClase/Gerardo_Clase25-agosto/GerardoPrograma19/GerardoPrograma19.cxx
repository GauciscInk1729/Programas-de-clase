//Programa 19
#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Programa que muestra los numeros pares menores o iguales a n\n";
    cout<<"Digite n:";
    cin>>n;
    for(int i=0;i<=n;i+=2){
        cout<<i;
        cout<<"\tmuy bien\n";
    }
    return 0;
}

