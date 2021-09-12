//Programa 2 de la tarea 3
/*Este programa pide al usuario cinco numeros enteros entre 1 y 30, su programa
debe imprimir una linea que contenga dicho numero de asteriscos adyacentes*/
#include <iostream>

using namespace std;
 int main(){
     int n1,n2,n3,n4,n5;
     cout<<"Digite 5 numeros entre 1 y 30";
     cout<<"Digite el primer numero:";cin>>n1;
     cout<<"Digite el segundo numero:";cin>>n2;
     cout<<"Digite el tercer numero:";cin>>n3;
     cout<<"Digite el cuarto numero:";cin>>n4;
     cout<<"Digite el quinto numero:";cin>>n5;
     cout<<"\n";
     for (int i=1;i<=n1;i++){
        cout<<"*";
     }
     cout<<"\n";
     for (int i=1;i<=n2;i++){
        cout<<"*";
     }
     cout<<"\n";
     for (int i=1;i<=n3;i++){
        cout<<"*";
     }
     cout<<"\n";
     for (int i=1;i<=n4;i++){
        cout<<"*";
     }
     cout<<"\n";
     for (int i=1;i<=n5;i++){
        cout<<"*";
     }
     cout<<"\n";
     return 0;
 }
