//Programa 33
#include <iostream>
using namespace std;

int main(){
    char R;
    float total=0, calf;
    int i=1;
    cout<<"Programa que despliega el promedio de n calificaciones\nde un grupo mediante una repeticion controlada por centinela";
    cout<<"Introduce la calificaciones y al final digite un -1\n";
    while(true){

        cout<<"Introduzca la calificacion "<<i<<":";cin>>calf;
        if(calf==-1)break;
        total+=calf;
        i++;
    }
    cout<<"El promedio es:"<<total/(i-1);
    return 0;
}

