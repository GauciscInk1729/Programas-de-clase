//Programa 9
//Este programa determina si un numero es par o impar.
#include <iostream>

using namespace std;

int main(){
int number;
cout<<"Ingrese el numero:";
cin>>number;
cout<<number;
if(number%2==0){
    cout<<" es par";
}else{
    cout<<" es impar";
}

return 0;
}
