//Programa 32
#include <iostream>
using namespace std;

int main(){
    float total=0, calf;
    int i=1;
    cout<<"Programa que despliega el promedio de 10 calificaciones\n";
    while(i<=10){
        cout<<"Introduzca la calificacion "<<i<<":";cin>>calf;
        total+=calf;
        i++;
    }
    cout<<i<<endl;
    cout<<"El promedio es:"<<total/(i-1);
    return 0;
}
