#include <iostream>
#include "Nodo.h"

using namespace std;

typedef Nodo* Node;

void insertar(Node inicio, int newDato) {
    Node nuevo = new Nodo();
    nuevo->setDato(newDato);

    if (inicio->getNext() == NULL) {
        inicio->setNext(nuevo);
        cout<<"\nEL dato "<<inicio->getNext()->getDato()<<" se ha ingresado a la lista"<<endl;
    } else {
        Node temp = inicio;
        while (temp->getNext() != NULL) {
            temp = temp->getNext();
        }
        temp->setNext(nuevo);
        cout<<"\nEL dato "<<temp->getNext()->getDato()<<" se ha ingresado a la lista"<<endl;
    }
}

void mostrarLista(Node inicio){
    if (inicio->getNext() == NULL) {
        cout<<"\nLista vacia"<<endl;
    } else {
        Node temp = inicio;
        while (temp->getNext() != NULL) {
            cout<<endl<<temp->getNext()->getDato()<<endl;
            temp = temp->getNext();
        }
    }
}

void eliminar(Node inicio, int index){
    int indice = 0;
    bool encontrado = false;

    if (inicio->getNext() == NULL){
        cout<<"Lista vacia"<<endl;
    } else {
        Node actual = inicio;
        Node borrar;
        Node anterior = NULL;

        while (actual->getNext() != NULL){

            if (indice == index) {
                if (anterior == NULL) {
                    borrar = actual->getNext();
                    actual->setNext(borrar->getNext());
                    delete borrar;
                    cout<<"Eliminado"<<endl;
                } else {
                    borrar = actual->getNext();
                    anterior->setNext(borrar->getNext());
                    delete borrar;
                    cout<<"Eliminado"<<endl;
                }
            } else {
                anterior = actual->getNext();
                actual = actual->getNext();
            }
        }
    }

}