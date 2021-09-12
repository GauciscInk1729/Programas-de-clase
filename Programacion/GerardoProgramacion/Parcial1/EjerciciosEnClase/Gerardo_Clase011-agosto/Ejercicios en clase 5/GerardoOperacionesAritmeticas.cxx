#include <iostream>

using namespace std;

int main(){
    int x1,y2;
    float x,y;
    cout<<"\t\tEste programa suma dos numeros cualesquiera distintos de cero\n";
    cout<<"Introduce el primer numero a sumar: ";
    cin>>x;
    cout<<"Introduce el segundo numero a sumar: ";
    cin>>y;
    cout<<"El resultado de:\nx*y="<<x*y<<"\nx/y="<<x/y<<"\ny/x="<<y/x<<"\nx+y="<<x+y<<"\nx-y="<<x-y<<"\ny-x="<<y-x<<endl<<endl;
    cout<<"Ahora, escriba el primer numero para poder realizar el modulo:";
    cin>>x1;
    cout<<"Introduzca el segundo numero:";
    cin>>y2;
    cout<<"El modulo x%y="<<x1%y2<<endl;
    return 0;
}
