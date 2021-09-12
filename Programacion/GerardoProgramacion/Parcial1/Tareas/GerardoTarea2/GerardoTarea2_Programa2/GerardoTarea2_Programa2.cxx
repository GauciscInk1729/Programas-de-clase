//Programa que ordena tres numeros reales de mayor a menor
#include <iostream>
using namespace std;

int main(){
    float a,b,c;
    cout<<"Ingrese el primer numero:";cin>>a;
    cout<<"Ingrese el segundo numero:";cin>>b;
    cout<<"Ingrese el tercer numero:";cin>>c;
    if(a>=b && a>=c){
        cout<<a<<", "<<max(b,c)<<", "<<min(b,c);
    }else if(b>=a && b>=c){
        cout<<b<<", "<<max(a,c)<<", "<<min(a,c);
    }else if(c>=b&&c>=a){
        cout<<c<<", "<<max(b,a)<<", "<<min(b,a);
    }
    return 0;
}
