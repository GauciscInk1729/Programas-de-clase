//Programa 21
#include <iostream>

using namespace std;

int main(){
float n;
cout<<"Programa que realiza la tabla de multiplicar(multiplos del 1 al 100) de un numero n a elegir\nDigite n:";
cin>>n;
for(int i=1;i<=100;i++){
    cout<<n<<"x"<<i<<"="<<n*i<<endl;
}
return 0;
}
