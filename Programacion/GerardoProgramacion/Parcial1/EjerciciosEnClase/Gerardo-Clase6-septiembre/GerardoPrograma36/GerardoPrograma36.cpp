//Programa 36
#include <iostream>
using namespace std;
int main(){
    int n=1,suma=0;
    cout<<"Sea S_k=1+2+...+k, este programa encuentra\n el ultimo numero k tal que la suma S_k<=1000\n";
    do{
        suma+=n;
        cout<<"\nLa suma en n=\t"<<n<<"\t es:\t"<<suma<<endl;
        n++;
    }while(suma<=1000);
    cout<<"El ultimo k tal que S_k<=1000 es:"<<n-2;
    cout<<"\n La suma es S_k=S_"<<n-2<<"="<<suma-(n-1)<<"\n\n";
    return 0;
}
