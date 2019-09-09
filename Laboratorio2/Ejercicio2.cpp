#include <iostream>

using namespace std;
float RC(float n=0,float r=0){
    float r1=((n/r)+r)/2;
    int aux=r1-r;
    if (aux<0){
        aux*=(-1);
    }
    if (aux<0.0001){
        return r;
    }
    else {
        RC(n, r1);
    }
    
}

int main(){
    int n=0; 
    cout<<"Ingrese el valor al que desea sacrle raiz: ";
    cin>>n; 
    cout<<"La raiz cuadrada es: "<<RC(n, 1)<<endl;
    
    return 0;
}