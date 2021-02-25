#include <iostream>
#include "Lista.h"

using namespace std;

typedef Nodo* Node;

void mostrarMenu();
void ejecutarOpcion(int op);

Node inicio = new Nodo();

int main(){
    int op;

    do{
        mostrarMenu();
        cout<<"Escoja una opcion: "<<endl;
        cin>>op;
        ejecutarOpcion(op);

    }while(op!= 4);

    return 0;
}

void mostrarMenu(){
    cout<<"\n1. Insertar elemento"<<endl;
    cout<<"2. Eliminar elemento"<<endl;
    cout<<"3. MostrarLista"<<endl;
    cout<<"4. Salir"<<endl;
}

void ejecutarOpcion(int op){
    int dato;
    int index;

    switch(op){
        case 1:
            cout<<"Ingrese el dato a ingresar"<<endl;
            cin>>dato;
            insertar(inicio, dato);
            break;
        case 2:
            cout<<"Ingrese el indice a eliminar"<<endl;
            cin>>index;
            eliminar(inicio, index);
            break;
        case 3:
            mostrarLista(inicio);
            break;
        default:
            cout<<"Saliendo..."<<endl;
    }
}