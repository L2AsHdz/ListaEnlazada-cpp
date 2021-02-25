#include <iostream>
#include "Lista.h"

using namespace std;

void mostrarMenu();
void ejecutarOpcion(int op);

Nodo *lista;

int main(){
    int op;

    do{
        mostrarMenu();
        cout<<"Escoja una opcion: "<<endl;
        cin>>op;
        ejecutarOpcion(op);

    }while(op!= 5);

    return 0;
}

void mostrarMenu(){
    cout<<"\n1. Insertar elemento"<<endl;
    cout<<"2. Eliminar elemento"<<endl;
    cout<<"3. Buscar"<<endl;
    cout<<"4. MostrarLista"<<endl;
    cout<<"5. Salir"<<endl;
}

void ejecutarOpcion(int op){
    int dato;
    int index;

    switch(op){
        case 1:
            cout<<"Ingrese el dato a ingresar"<<endl;
            cin>>dato;
            insertar(lista, dato);
            break;
        case 2:
            cout<<"Ingrese el indice a eliminar"<<endl;
            cin>>index;
            eliminar(lista, index);
            break;
        case 3:
            cout<<"ingrese el indice a obtener"<<endl;
            cin>>index;
            cout<<"El dato es "<<obtener(lista, index)<<endl;
            break;
        case 4:
            mostrarLista(lista);
            break;
    }
}