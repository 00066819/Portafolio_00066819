//Nelson Alexander Evora Diaz 00066819 (codigo hecho y probado en Dev-C++)
#include <iostream>
#include <string>
using namespace std;

struct Numero{
    int numero;
};
typedef struct Numero Numero;

Numero solicitarNumero(){
    Numero p;
    cout << "Numero: "; cin >> p.numero;    
    return p;
}

void mostrarNumero(Numero p){
    cout<<"Numero: "<<p.numero<<endl;
}

struct TNodo{
    Numero dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertarInicio(Numero p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = pInicio;
    
    pInicio = nuevo;
}

void insertarFinal(Numero p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = NULL;
    
    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        Nodo *p = pInicio;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}


void agregarNumero(){
    Numero p = solicitarNumero();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
             << "\n\tOpcion elegida: ";
        cin>>opcion;
        switch(opcion){
            case 1: insertarInicio(p);  continuar = false;
            break;
            case 2: insertarFinal(p);   continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);
}

void mostrarLista() {
    Nodo *s = pInicio;

    while (s != NULL) {
        mostrarNumero(s->dato);
        s = s->sig;
    }
}

void eliminarNumero(int unNumero){
	int Num=unNumero;
    Nodo *p = pInicio, *q = NULL;
    
    while(p != NULL && (p->dato).numero != Num){
        q = p;
        p = p->sig;
    }
    if(p == NULL){
        cout << "Numero a borrar NO existe" << endl;
        return;
    }
    if(q == NULL)
        pInicio = p->sig;
    else
        q->sig = p->sig;
    delete(p);
    eliminarNumero(unNumero);
}

int main(){
	int unNumero;
    cout << "Inicializando..." << endl;
    pInicio = NULL;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar numero\n\t2) Ver numeros"
            << "\n\t3) Eliminar numero"
            << "\n\t4) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout << "Agregando..." << endl;
                agregarNumero();
            break;
            case 2: cout << "Listando..." << endl;
                mostrarLista();
            break;
            case 3: cout << "Numero que desea eliminar: ";
  					cin >> unNumero;
					cout << "Eliminando..." << endl;
					eliminarNumero(unNumero);
                    cout<<"Numeros eliminados!"<<endl;
            break;
            case 4: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
