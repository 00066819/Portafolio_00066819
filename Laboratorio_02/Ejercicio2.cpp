#include<iostream>
using namespace std;

float RC(float n=0, float r=0){
	float r1=((n/r)+r)/2;
	float aux=r1-r;
	if ((r1-r)<0){
		aux*=(-1);
	}
	
	if(aux<0.001){
		return r;
	}
	else {
		RC(n, r1);
	}
}

int main(){
	int n=0;
	cout<<"Ingrese el numero del cual desea la raiz: ";
	cin>>n;
	
	cout<<"La raiz cuadrada de "<<n<<" es: "<<RC(n, 1)<<endl;
	
	return 0;
}

