//Programa 3 de la tarea 4
#include <iostream>
using namespace std;
int main(){
    int n=1,potencia2_k=2;
    cout<<"Programa que encuentra la primera potencia de 2 que sea mayor a 1000\n";
    do{
        potencia2_k*=2;
        cout<<"\nLa suma en n=\t"<<n<<"\t es:\t"<<potencia2_k<<endl;
        n++;
    }while(potencia2_k<=1000);
    cout<<"La primera k tal que 2^k>=1000 es:"<<n;
    cout<<"\n La potencia 2^"<<n<<"="<<potencia2_k<<"\n\n";
    return 0;
}
