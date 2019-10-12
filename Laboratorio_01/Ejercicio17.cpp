#include <iostream>
using namespace std;

int main(){
    
    int a[10], n=0;
    double s, p;
    cout<<"Suma y promedio de 10 enteros"<<endl;
        
    while (n<10){
        cout<<"Digite el entero "<<n+1<<": ";
        cin>>a[n];
        s+=a[n];
        p=s/10;
        n++;
    }
    cout<<"La suma de los valores es: "<<s<<endl;
    cout<<"El promedio de los valores es: "<<p<<endl;
    
    return 0;
}
