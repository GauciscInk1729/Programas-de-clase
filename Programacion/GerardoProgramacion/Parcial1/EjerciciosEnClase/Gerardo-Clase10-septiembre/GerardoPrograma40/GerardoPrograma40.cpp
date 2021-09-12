//Programa 40
#include <iostream>
using namespace std;
long factorial(long y){
for(int i=y-1;i>1;i--){
	y*=i;
}
return y;
}
int main(){
	long x;
	cout<<"Introduce el numero entero del cual quieres calcular el factorial\n";
	cin>>x;
	cout<<"El factorial de "<<x<<" es:"<<factorial(x);
return 0;
}
