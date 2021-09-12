//Programa 12-1
//Raiz cuadrada de un numero
#include <iostream>
#include <math.h>//Permite el uso de funciones matematicas

using namespace std;

int main(){
float x;

cout<<"Programa que calcula la raiz cuadrada de un numero dado por el usuario\n";
cout<<"Digite el numero:";
cin>>x;
cout<<"La raiz cuadrada de "<<x<<" es "<<sqrt(x);
return 0;
}
