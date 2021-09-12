//Programa 1 de la Tarea 4
#include <iostream>
using namespace std;
int main(){
     int n1,n2,n3,n4,n5;
     char s;
     do{
     cout<<"Digite 5 numeros entre 1 y 30\n";
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
     cout<<"\nSi desea ingresar otros cinco numeros digite s, si no, solo presione cualquier otra tecla:";cin>>s;

     }while(s=='s' || s=='S');
    return 0;
}
