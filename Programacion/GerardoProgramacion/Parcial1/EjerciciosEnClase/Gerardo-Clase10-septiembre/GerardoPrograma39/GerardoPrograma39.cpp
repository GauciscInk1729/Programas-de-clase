//Programa 39
#include<iostream>
using namespace std;
float suma(float a, float b, float c){
return a+b+c;
}
int main(){
float promedio, calc1,calc2,calc3;
cout<<"Programa que obtiene el promedio de tres calificaciones\n";
cout<<"Digite la calificacion 1:";cin>>calc1;
cout<<"Digite la calificacion 2:";cin>>calc2;
cout<<"Digite la calificacion 3:";cin>>calc3;
promedio=suma(calc1,calc2,calc3)/3;
cout<<"Tu promedio es:"<<promedio;
return 0;
}
