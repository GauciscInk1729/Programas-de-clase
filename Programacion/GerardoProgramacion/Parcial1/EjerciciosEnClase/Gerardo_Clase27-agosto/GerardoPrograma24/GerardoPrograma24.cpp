
//GerardoPrograma23
/*
Considerando el siguiente problema:Una persona invierte $1000.00 en una cuenta de ahorros con 5%,6%..10% de interes
Se asume que todo el interes se deja en deposito dentro de la cuenta;calcule y despliegue el monto acumilado de la cuenta
al final de cada a�o, durante 10 a�os.
Utilice la siguiente formula para determinar estos montos: monto=p(1+r)^a
Donde:
p= monto principal
r es la tasa de intereses
a
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double monto, principal=1000,tasa=0.05;
    for(;tasa<=0.1;tasa+=0.01){
        cout<<"A"<<char(164)<<"o\t\t Monto del deposito\n";
        for(int i=1;i<=10;i++){
            monto=principal*pow(1+tasa,i);
            cout<<i<<" \t\t "<<monto<<endl;
        }
    }
    return 0;
}
