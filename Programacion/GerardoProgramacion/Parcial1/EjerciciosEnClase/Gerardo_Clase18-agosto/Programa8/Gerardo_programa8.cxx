//Programa 8
//Este programa nos dice si una persona es menor o mayor de edad.
#include <iostream>

using namespace std;

int main(){
int edad;
cout<<"¿Que edad tienes?\n";
cin>>edad;
if(edad>=18){
    cout<<"eres mayor de edad";
}else{
    cout<<"Eres menor de edad";
}
return 0;
}
