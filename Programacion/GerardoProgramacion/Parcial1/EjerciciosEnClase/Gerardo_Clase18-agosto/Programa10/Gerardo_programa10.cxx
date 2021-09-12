//Programa 10
//Programa que determina la situacion de un alumno de acuerdo a su promedio
#include <iostream>

using namespace std;

int main(){
    float x,y,z,w;
    cout<<"Programa que determina la situacion de un alumno de acuerdo a su promedio\n";
    cout<<"Da la calificacion de los 3 examenes parciales\n";
    cin>>x>>y>>w;
    z=(x+y+w)/3;
    if(z>=8){
        cout<<"\nEstas excento";
    }else if(z>=6){
        cout<<"\nPresentas examen ordinario";
    }else if(z>=4){
        cout<<"\nPresentas extraordinario";
    }else if(z>=2){
        cout<<"\nPresentas titulo de suficiencia";
    }else{
        cout<<"\nReciclaras la materia";
    }
return 0;
}
