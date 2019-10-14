//Nelson Alexander Evora Diaz 00066819 (Codigo hecho y probado en Dev-C++)
#include <iostream>
#include <string>
using namespace std;

enum generos{ciencia_ficcion,aventura,policial,romance,misterio};

struct TLibro{
    int isbn;
    string titulo;
    int pags;
};
typedef struct TLibro Libro;

Libro solicitarLibro(){
    Libro p;
    
    cout<<"ISBN: "; cin>>p.isbn;
    cin.ignore();
    cout<<"Titulo: "; getline(cin, p.titulo);
    cout<<"Numero de paginas: "; cin>>p.pags; 
        return p;
}

void mostrarLibro(Libro p){
    cout<<"ISBN: "<<p.isbn<<endl;
    cout<<"Titulo: "<<p.titulo<<endl;
    cout<<"Numero de paginas: "<<p.pags<<endl;
}

struct TNodo{
    Libro dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertarInicio(Libro p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = pInicio;
    
    pInicio = nuevo;
}

void insertarFinal(Libro p) {
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

void agregarLibro(){
    Libro p = solicitarLibro();
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final";
        cin >> opcion;
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
        mostrarLibro(s->dato);
        s = s->sig;
    }
}

bool buscarLibro() {
    int unISBN = 0;
    cout<<"ISBN de libro a buscar: ";
    cin>>unISBN;
    
    Nodo *s = pInicio;

    while(s != NULL && (s->dato).isbn != unISBN)
        s = s->sig;
    
    //Si s!=NULL entonces el libro SI se encuentra
    //Si s==NULL entonces el libro NO se encuentra
   	cout<<"El numero de paginas del libro es: "<<(s->dato).pags<<endl;

    return (s != NULL);
}

int main(){
    cout << "Inicializando..." << endl;
    pInicio = NULL;
    
    bool continuar = true;
    do{
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Libro\n\t2) Ver Libros"
            << "\n\t3) Buscar Libro"
            << "\n\t4) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch(opcion){
            case 1: cout<<"Agregando..."<<endl;
                agregarLibro();
            break;
            case 2: cout<<"Mostrando..."<<endl;
                mostrarLista();
            break;
            case 3: cout<<"Buscando..."<<endl;
            if(buscarLibro()==true){
            	buscarLibro();
			}
			else{
				cout<<"EL LIBRO NO SE ENCUENTRA!"<<endl;
			}
			break;
            case 4: continuar = false;
            break;
            default: cout << "Opcion erronea!" << endl;
            break;
        }
    }while(continuar);

    return 0;
}
