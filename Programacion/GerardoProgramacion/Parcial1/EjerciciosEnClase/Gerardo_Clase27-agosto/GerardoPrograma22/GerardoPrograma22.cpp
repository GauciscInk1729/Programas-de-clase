//Programa 22
#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"\nPrograma que despliega un triangulo rectangulo de base n y altura n\n";
    cout<<"Digite n:";cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"Very Well";
    return 0;
}
