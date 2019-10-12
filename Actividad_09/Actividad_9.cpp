//Literal C) de la activiad 7
#include <iostream>
#include <stack>
using namespace std;

	int main()
{
	stack<int> s;
	cout<<"Ingresando los datos"<<endl;
	cout<<"Ingresando primer dato..."<<endl;
	s.push(23);	
	cout<<"Primer dato: "<<s.top()<<endl;
	cout<<"Ingresando segundo dato..."<<endl;
	s.push(6);	
	cout<<"Segundo dato: "<<s.top()<<endl;
	cout<<"Ingresando tercer dato..."<<endl;
	s.push(2001);	
	cout<<"Tercer dato: "<<s.top()<<endl;
	cout<<"Ingresando cuarto dato..."<<endl;
	s.push(36);	
	cout<<"Cuarto dato: "<<s.top()<<endl;

	cout<<"Buscando el valor del fondo, dejando la pila vacia"<<endl;
	s.pop();
	s.pop();
	s.pop();
	cout<<"Ultimo dato: "<<s.top()<<endl;
	s.pop();

	if (s.empty())
		cout << "La pila esta vacia."<<endl;
	else
		cout << "La pila no esta vacia."<<endl;

	return 0;
}