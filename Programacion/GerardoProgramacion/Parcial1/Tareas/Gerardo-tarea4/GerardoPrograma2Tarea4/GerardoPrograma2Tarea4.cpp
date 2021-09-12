//Programa 2 de la tarea 4
//Programa que imprime el abecedario
#include<iostream>
using namespace std;
int main(){
    for(int i=65;i<=90;i++){
        cout<<char(i)<<"("<<char(i+32)<<") ";
    }
    return 0;
}
