#include <iostream>
#include <string>
using namespace std;

struct TPersona
{
    string Carnet;
    string Nombre;
    string Apellido;
    int Edad;
    int numTel;
    string Correo;
};
typedef struct TPersona Persona;

Persona solicitarPersona()
{
    Persona p;
    cout << "Carnet: ";
    cin >> p.Carnet;
    cin.ignore();
    cout << "Nombre: ";
    getline(cin, p.Nombre);
    cout << "Apelldio: ";
    getline(cin, p.Apellido);
    cout << "Edad: ";
    cin >> p.Edad;
    cout << "Numero de telefono: ";
    cin >> p.numTel;
    cin.ignore();
    cout << "Correo: ";
    getline(cin, p.Correo);

    return p;
}

void mostrarPersona(Persona p)
{
    cout << "Carnet: " << p.Carnet << endl;
    cout << "Nombre: " << p.Nombre << endl;
    cout << "Apellido: " << p.Apellido << endl;
    cout << "Edad: " << p.Edad << endl;
    cout << "Numero de telefono: " << p.numTel << endl;
    cout << "Correo: " << p.Correo << endl;
    cout << endl;
}

struct TNodo
{
    Persona dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertarInicio(Persona p)
{
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = pInicio;

    pInicio = nuevo;
}

void insertarFinal(Persona p)
{
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = NULL;

    if (pInicio == NULL)
    {
        pInicio = nuevo;
    }
    else
    {
        Nodo *p = pInicio;
        Nodo *q = NULL;
        while (p != NULL)
        {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void agregarPersona()
{
    Persona p = solicitarPersona();
    bool continuar = true;
    do
    {
        int opcion = 0;
        cout << "\t1) Al principio\n\t2) Al final"
             << "\n\tOpcion elegida: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            insertarInicio(p);
            continuar = false;
            break;
        case 2:
            insertarFinal(p);
            continuar = false;
            break;
        }
    } while (continuar);
}

void mostrarLista()
{
    Nodo *s = pInicio;

    while (s != NULL)
    {
        mostrarPersona(s->dato);
        s = s->sig;
    }
}

void eliminarPersona()
{
    string unCarnet;
    cout << "Carnet de persona a eliminar: ";
    cin >> unCarnet;

    Nodo *p = pInicio, *q = NULL;

    while (p != NULL && (p->dato).Carnet != unCarnet)
    {
        q = p;
        p = p->sig;
    }
    if (p == NULL)
    {
        cout << "Persona a borrar NO existe" << endl;
        return;
    }
    if (q == NULL)
        pInicio = p->sig;
    else
        q->sig = p->sig;
    delete (p);
    cout << "Persona borrada!" << endl;
}

void actualizarPersona()
{
    string unCarnet;
    cout << "Carnet de la persona que desea actualizar: ";
    cin >> unCarnet;

    Nodo *p = pInicio, *q = NULL;

    while (p != NULL && (p->dato).Carnet != unCarnet)
    {
        q = p;
        p = p->sig;
    }
    if (p == NULL)
    {
        cout << "Persona a actualizar NO existe" << endl;
        return;
    }
    cout << "Carnet: ";
    cin >> (p->dato).Carnet;
    cin.ignore();
    cout << "Nombre: ";
    getline(cin, (p->dato).Nombre);
    cout << "Apelldio: ";
    getline(cin, (p->dato).Apellido);
    cout << "Edad: ";
    cin >> (p->dato).Edad;
    cout << "Numero de telefono: ";
    cin >> (p->dato).numTel;
    cin.ignore();
    cout << "Correo: ";
    getline(cin, (p->dato).Correo);
}

int main()
{
    cout << "Inicializando..." << endl;
    pInicio = NULL;

    bool continuar = true;
    do
    {
        int opcion = 0;
        cout << "Menu: \n\t1) Agregar Persona\n\t2) Ver Personas"
             << "\n\t3) Eliminar Persona\n\t4) Actualizar Persona"
             << "\n\t5) Salir\n\tOpcion elegida: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            cout << "Agregando..." << endl;
            agregarPersona();
            break;
        case 2:
            cout << "Listando..." << endl;
            mostrarLista();
            break;
        case 3:
            cout << "Eliminando..." << endl;
            eliminarPersona();
            break;
        case 4:
            cout << "Actualizando..." << endl;
            actualizarPersona();
            break;
        case 5:
            continuar = false;
            break;
        default:
            cout << "Opcion erronea!" << endl;
            break;
        }
    } while (continuar);

    return 0;
}