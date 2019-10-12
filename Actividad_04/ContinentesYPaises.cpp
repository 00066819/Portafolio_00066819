//Nelson Alexander Evora Diaz 00066819
#include <iostream>
using namespace std;
//Codigo con errores.
struct Pais{
	string Nombre;
	string Capital;
	int Habitantes;
	double PromEdad;
};

void Asia(struct Pais *p){
	int h1;
	float *pe1;
	cout<<"Ingrese los datos de los paises: "<<endl;
	for(int j=0; j<5; j++){
	cout<<"Nombre: ";
	cin>>(*p).Nombre;
	cout<<"Capital: ";
	cin>>(*p).Capital;
	cout<<"Habitantes: ";
	cin>>(*p).Habitantes;
	cout<<"Promedio de edad: ";
	cin>>(*p).PromEdad;
	cout<<endl;
	h1+=(*p).Habitantes;
	*pe1+=(*p).PromEdad;
}
	cout<<"El total de habitantes de las capitales del continente es: "<<h1<<endl<<endl;
	
}

void America(struct Pais *p){
	int h2;
	float *pe2;
	cout<<"Ingrese los datos de los paises: "<<endl;
	for(int j=0; j<5; j++){
	cout<<"Nombre: ";
	cin>>(*p).Nombre;
	cout<<"Capital: ";
	cin>>(*p).Capital;
	cout<<"Habitantes: ";
	cin>>(*p).Habitantes;
	cout<<"Promedio de edad: ";
	cin>>(*p).PromEdad;
	cout<<endl;
	h2+=(*p).Habitantes;
	*pe2+=(*p).PromEdad;
}
	cout<<"El total de habitantes de las capitales del continente es: "<<h2<<endl<<endl;
	
}

void Africa(struct Pais *p){
	int h3;
	float *pe3;
	cout<<"Ingrese los datos de los paises: "<<endl;
	for(int j=0; j<5; j++){
	cout<<"Nombre: ";
	cin>>(*p).Nombre;
	cout<<"Capital: ";
	cin>>(*p).Capital;
	cout<<"Habitantes: ";
	cin>>(*p).Habitantes;
	cout<<"Promedio de edad: ";
	cin>>(*p).PromEdad;
	cout<<endl;
	h3+=(*p).Habitantes;
	*pe3+=(*p).PromEdad;
}
	cout<<"El total de habitantes de las capitales del continente es: "<<h3<<endl<<endl;
	
}

void Europa(struct Pais *p){
	int h4;
	float *pe4;
	cout<<"Ingrese los datos de los paises: "<<endl;
	for(int j=0; j<5; j++){
	cout<<"Nombre: ";
	cin>>(*p).Nombre;
	cout<<"Capital: ";
	cin>>(*p).Capital;
	cout<<"Habitantes: ";
	cin>>(*p).Habitantes;
	cout<<"Promedio de edad: ";
	cin>>(*p).PromEdad;
	cout<<endl;
	h4+=(*p).Habitantes;
	*pe4+=(*p).PromEdad;
}
	cout<<"El total de habitantes de las capitales del continente es: "<<h4<<endl<<endl;
	
}

float Oceania(struct Pais *p){
	int h5;
	float *pe5;
	cout<<"Ingrese los datos de los paises: "<<endl;
	for(int j=0; j<5; j++){
	cout<<"Nombre: ";
	cin>>(*p).Nombre;
	cout<<"Capital: ";
	cin>>(*p).Capital;
	cout<<"Habitantes: ";
	cin>>(*p).Habitantes;
	cout<<"Promedio de edad: ";
	cin>>(*p).PromEdad;
	cout<<endl;
	
	*pe5=(*p).PromEdad;
	h5+=(*p).Habitantes;
}
	cout<<"El total de habitantes de las capitales del continente es: "<<h5<<endl;
	
}

int main()
{
	Pais p;
	cout<<"1. Asia"<<endl<<"2. America"<<endl<<"3. Africa"<<endl<<"4. Europa"<<endl<<"5. Oceania"<<endl<<endl;
	for(int k=0; k<5; k++){
	cout<<"Ingrese el continente: ";
	int num;
	cin>>num;
	if (num==1){
	cout<<"Continente Asia: "<<endl;
	Asia(&p);
}
		if (num==2){
		cout<<"Continente America: "<<endl;
		America(&p);
	}
			if (num==3){
			cout<<"Continente Africa: "<<endl;
			Africa(&p);
		}
				if (num==4){
				cout<<"Continente Europa: "<<endl;
				Europa(&p);
			}
					if (num==5){
					cout<<"Continente Oceania: "<<endl;
					Oceania(&p);
				}
}

float pr1, pr2, pr3, pr4, pr5;
*pe1=pr1;
*pe2=pr2;
*pe3=pr3;
*pe4=pr4;
*pe5=pr5;
float pet=(float)(pr1+pr2+pr3+pr4+pr5)/25;
cout<<"El promedio de edad total es: "<<pet<<endl;
	return 0;
}
