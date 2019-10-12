#include <iostream>
using namespace std;

struct NC{
	float pr, pi;
};
NC a, b;

void numerosc(){
	cout<<"Primer numero complejo"<<endl;
	cout<<"Ingrese la parte real: ";
	cin>>a.pr;
	cout<<"Ingrese la parte imaginaria: ";
	cin>>a.pi;
	cout<<endl;
	
	cout<<endl;
	cout<<"Segundo numero complejo"<<endl;
	cout<<"Ingrese la parte real: ";
	cin>>b.pr;
	cout<<"Ingrese la parte imaginaria: ";
	cin>>b.pi;
}

NC sum(NC a, NC b){
	a.pr+=b.pr;
	a.pi+=b.pi;
	
	return a;
}

void res(NC m){
	if (m.pi < 0){
	cout<<endl;
	cout<<"El resultado de la suma es: "<<m.pr<<m.pi<<"i"<<endl;
	}
	else{
	cout<<endl;
	cout<<"El resultado de la suma es: "<<m.pr<<"+"<<m.pi<<"i"<<endl;
}
}

int main(){
	numerosc();
	NC m = sum(a, b);
	res(m);
	
	return 0;
}
