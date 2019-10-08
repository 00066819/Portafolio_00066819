//Nelson Alexander Evora Diaz 00066819
#include <iostream>
#define tam 100

using namespace std;
int n[tam];
int top = -1;
int bot = -1;

bool empty(){
if(top==-1 && bot==-1)
return true;
else
return false;
}

void introd(int valor){
if((bot+1)%tam==top)
	cout<<"La cola esta llena"<<endl;
else{
	if(top==-1){
    top=0;
	}
bot=(bot+1)%tam;
n[bot]=valor;
}
}

void mostrar(){
if(empty())
	cout<<"La cola esta vacia"<<endl<<endl;
else{
	int i;
cout<<"COLA COMPLETA"<<endl;
if(top <= bot){
	for(i=top; i<=bot; i++)
		cout<<n[i]<<" "<<endl;
  		}
else{
	i=top;
while(i<tam){
	cout<<n[i]<<" "<<endl;
	i++;
	}
i=0;
while(i<=bot){
	cout<<n[i]<<" "<<endl<<endl;
	i++;
}
}
}
}

int main(){
 int opc, bandera=1, valor;
 while(bandera == 1){
	cout<<"Digite 1 para introducir un dato y 2 para mostrar la cola"<<endl;
	cin>>opc;
switch (opc){
case 1: cout<<"Introduzca el valor: ";
		cin>>valor;
		introd(valor);
        break;
case 2: mostrar();
        break;
  
}
}
 return 0;
}
