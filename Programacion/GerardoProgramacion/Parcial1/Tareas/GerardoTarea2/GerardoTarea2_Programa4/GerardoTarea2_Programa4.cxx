//Este programa es el mismo que el 3, pero con operadores logicos
#include <iostream>

using namespace std;

int main(){
    float x;
    cout<<"Digite una x:";cin>>x;
    if(x>=10){
        cout<<"f(x)=5";
    }else if(x>=5 && x<10){
        cout<<"f(x)=4";
    }else if(x>=0 && x<5){
        cout<<"f(x)=3";
    }else if(x<0 && x>=-5){
        cout<<"f(x)=2";
    }else if(x>=-10 && x<-5){
        cout<<"f(x)=1";
    }
return 0;
}
