//Programa 14
//De minuscula a mayuscula
#include <iostream>

using namespace std;

int main(){
char x1;
cout<<"Este programa cambia una letra minuscula a mayuscula\n";
cout<<"\nIntroduce la letra\n";
cin>>x1;
cout<<"\nLa letra en mayuscula es:"<<char(x1-32)<<endl;
return 0;
}
