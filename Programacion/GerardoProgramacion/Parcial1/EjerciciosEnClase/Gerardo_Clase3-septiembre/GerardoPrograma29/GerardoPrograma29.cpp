//Programa 28
#include <iostream>
using namespace std;
int main(){
    cout<<"Este programa imprime los numeros pares del 1 al 10";
    for(int x=1;x<=10;x++){
        if(x%2==0)continue;
        cout<<x<<endl;
    }
    cout<<"\nUtiliza continue para ignorar los numeros pares";
    return 0;
}

