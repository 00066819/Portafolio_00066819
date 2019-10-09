//Nelson Alexander Evora Diaz 00066819 (Trabajo hecho en parejas con Carmen Elisa Lopez Alvarado)
#include <iostream>
#include <vector>
using namespace std;

struct Orden{
int Revueltas;
int FrijolConQueso;
int Queso;
char Masa[5];
};
typedef struct Orden Orden;

Orden solicitarOrden(){
    Orden p;
    cout << "Revueltas: "; cin>>p.Revueltas;
    cout << "Frijol con Queso: ";   cin>>p.FrijolConQueso;
    cout << "Queso: "; cin>>p.Queso;
    cout << "Masa: "; cin>>p.Masa;

    return p;
}

void mostrarOrden(Orden p){
    cout << "Revueltas: "<<p.Revueltas<<endl;
    cout << "Frijol Con Queso: "<<p.FrijolConQueso<<endl;
    cout << "Queso: "<<p.Queso<<endl;
    cout << "Masa: "<<p.Masa<<endl;

    cout << endl;
}

vector<Orden> lista;

void agregarOrden(){
    Orden p = solicitarOrden();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
            << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: lista.insert(lista.begin(), p);
                continuar = false;
            break;
            case 2: lista.push_back(p);
                continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    for (int i = 0; i < lista.size(); i++) 
        mostrarOrden(lista[i]);
}

int main(){
    cout << "PUPUSERIA UCA" << endl;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Orden\n\t2) Ver Ordenes"
            << "\n\t3) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarOrden();
            break;
            case 2: cout << "Mostrando Ordenes..." << endl;
                mostrarLista();
            break;
            case 3: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
