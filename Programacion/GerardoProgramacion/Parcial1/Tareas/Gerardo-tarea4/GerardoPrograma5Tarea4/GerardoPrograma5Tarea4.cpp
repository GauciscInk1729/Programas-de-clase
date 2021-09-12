//Programa 5 de la tarea 4
//Collatz
#include<iostream>
using namespace std;
int main(){
    long long int n,i=1;
cout<<"Programa que dado un numero entero n ingresado por el usuario\n donde si n es par, entonces se divide entre 2\n si es impar se multiplica por 3 y se suma 1\n asi hasta que la secuencia de resultados de 1.";
cout<<"\nDigite n:";cin>>n;
cout<<"El valor inicial es:"<<n<<endl;
while(n!=1){
    n=(n%2==0)?n/2:3*n+1;
    (n==1)?cout<<"Valor final:"<<n:cout<<"El siguiente valor es:"<<n<<endl;
    i++;
};
cout<<"\nNumero de iteraciones="<<i-1;
    return 0;
}
