#include <iostream>
using namespace std;

int func(int n){
    if(n==0)
        return(0);
    return(n + func(n-1));
   
}

int main() {
    int n, i, aux=0, num=0;
    cout<<"Algo: ";
    cin>>n;
    cout<<"Funcion recursiva"<<endl;
    cout<<func(n)<<endl;
    
    cout<<"Funcion iterativa"<<endl;
    for(i=1; i<=n; i++){
        num=i+aux;
        aux=num;
    }
    cout<<num<<endl;
    cout<<"La funcion suma todos los numeros anteriores al ingresado."<<endl;
    
    return 0;
}

