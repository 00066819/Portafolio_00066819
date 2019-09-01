//Nelson Alexander Evora Diaz 00066819 Seccion 02
#include <iostream>
using namespace std;

int main(){
	int arreglo[150], n;
	double Me=0;
	
	cout <<"Cuantos numeros desea?"<<endl;
	cin>>n;
	
	for(int i=0; i<n; i++){
	cout<<"Ingrese el numero "<<i+1<<": ";
	cin>>arreglo[i];
}
	if(n%2==0){
	int x=(n+1)/2;
//	cout<<arreglo[x-1]<<endl;
	Me=(float)(arreglo[x-1]+arreglo[x])/2;
	cout<<"La mediana es: "<<Me<<endl;
	}

	else{
		int x=n/2;
		cout<<"La mediana es: "<<arreglo[x]<<endl;
	}

	
	return 0;
}
