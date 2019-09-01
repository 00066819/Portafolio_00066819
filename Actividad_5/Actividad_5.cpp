//Nelson Alexander Evora Diaz 00066819
#include <iostream>
using namespace std;
int multi(int a, int b){
	if(b==1){
		return a;
	}else{
		int x =multi (a, (b-1));
		int y = a;
		return x + y;
	}
}
int main()
{
	int a, b;
	cout<<"Ingrese los datos a y b: "<<endl;
	cin>>a;
	cin>>b;
	multi;
	int r=multi(a, b);
	cout<<"El resultado es: "<<r<<endl;
	
	return 0;
}