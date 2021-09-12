//Programa 38
#include <iostream>
using namespace std;
void tablas(int x){
    cout<<"La tabla de mulplicar del numero:"<<x<<"es:\n";
for(int i=0;i<=10;i++){
    cout<<x<<"X"<<i<<"="<<x*i<<endl;
}
}
int main(){
    int n;
    cout<<"\nPrograma que muestra la tabla de mulplicar de los primeros 10 multiplos \nun numero n dado por el usuario\n";
    cout<<"Digite el entero del cual quieres obtener la tabla de mulplicar:";
    cin>>n;
    tablas(n);
    return 0;
}
