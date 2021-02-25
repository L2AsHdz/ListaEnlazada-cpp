#include <iostream>
#include "Lista.h"

using namespace std;

void insertar(Nodo *lista, int dato){
    Nodo *nuevo = new Nodo();
    nuevo->dato = dato;

    Nodo *aux = lista;
    Nodo *temp;

    if (lista->siguiente == NULL){
        nuevo->siguiente = aux;
        aux->siguiente = nuevo;
        cout<<"Elemento ingresado "<<dato<<endl;
    } else {
        while (aux->siguiente != NULL){
            aux = aux->siguiente;
        }

        nuevo->siguiente = NULL;
        aux->siguiente = nuevo;
        cout<<"Elemento ingresado "<<dato<<endl;
    }
}

void eliminar(Nodo *lista, int index){

    if (lista != NULL) {
        int i = 0;
        Nodo *auxDelete;
        Nodo *anterior = NULL;

        auxDelete = lista;

        while ((auxDelete != NULL) && (i != index)) {
            anterior = auxDelete;
            auxDelete = auxDelete->siguiente;

            i++;
        }

        if (auxDelete == NULL) {
            cout<<"Elemento no encontrado"<<endl;;
        } else if (anterior == NULL) {
            lista = lista->siguiente;
            delete  auxDelete;
            cout<<"Elemento eliminado"<<endl;
        } else {
            anterior->siguiente = auxDelete->siguiente;
            delete auxDelete;
            cout<<"Elemento eliminado"<<endl;
        }
    }
}

int obtener(Nodo *lista, int index){
    int i = 0;
    bool encontrado =false;
    Nodo *actual = new Nodo();
    actual = lista;

    while ((actual != NULL)) {
        if (i == index) {
            encontrado = true;
        } else {
            actual = actual->siguiente;
            i++;
        }

    }

    if (encontrado) {
        cout<<"Elemento encontrado"<<endl;
        return actual->dato;
    } else {
        return -1;
        cout<<"Elemento no encontrado"<<endl;
    }
}

void mostrarLista(Nodo *lista){
    Nodo *actual = new Nodo();
    actual = lista;

    while (actual != NULL) {
        cout<<actual->dato<<endl;
        actual = actual->siguiente;
    }
}