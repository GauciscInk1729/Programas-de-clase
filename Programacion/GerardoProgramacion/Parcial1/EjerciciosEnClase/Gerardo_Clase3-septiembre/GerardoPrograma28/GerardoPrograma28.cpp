//Programa 28
#include <iostream>
using namespace std;
int main(){
    cout<<"Ejemplo: Uso de continue en un for";
    for(int x=1;x<=10;x++){
        if(x==5)continue;
        cout<<x<<endl;
    }
    cout<<"\nUtiliza continue para ignorar la impresion del valor 5";
    return 0;
}
