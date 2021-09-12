
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
    x*=y;
    cout<<"El resultado de:\nx*y="<<x;
    x/=y;
    x/=y;
    cout<<"\nx/y="<<x;
    x*=y;
    y/=x;
    cout<<"\ny/x="<<y/x;
    y*=x;
    x+=y;
    cout<<"\nx+y="<<x;
    x-=y;
    x-=y;
    cout<<"\nx-y="<<x<<"\ny-x=";
    x*=-1;
    cout<<x<<endl<<endl;
    cout<<"Ahora, escriba el primer numero para poder realizar el modulo:";
    cin>>x1;
    cout<<"Introduzca el segundo numero:";
    cin>>y2;
    x1%=y2;
    cout<<"El modulo x%y="<<x1 <<endl;
    return 0;
}
