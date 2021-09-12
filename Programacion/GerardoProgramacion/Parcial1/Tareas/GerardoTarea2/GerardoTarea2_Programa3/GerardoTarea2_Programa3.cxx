/*Programa que evalúa la siguiente función
escalonada:  f(x)=5 si  10<=x,  f(x)=4 si  5<=x<10, f(x)=3 si  0<=x<5, f(x)=2 si  -5<=x<0, f(x)=1 si
-10<=x<-5.*/
#include <iostream>

using namespace std;

int main(){
    float x;
    cout<<"Digite una x:";cin>>x;
    if (x>=10){
        cout<<"f(x)=5";
    }else{
        if(x>=5){
            cout<<"f(x)=4";
        }else{
            if(x>=0){
                cout<<"f(x)=3";
            }else{
                if(x>=-5){
                    cout<<"f(x)=2";
                }else{
                    if(x>=-10){
                        cout<<"f(x)=1";
                    }
                }
            }
        }
    }
    return 0;
}
