#include <iostream>
using namespace std;

int main(){
	
int n;
cout<<"Ingrese un numero: ";
cin>>n;
cout<<"El número invertido es: ";
while (n != 0){
	cout<<n%10;
	n/=10;
}
	
	return 0;
}
