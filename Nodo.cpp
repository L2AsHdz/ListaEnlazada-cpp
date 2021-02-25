#include <iostream>
#include "Nodo.h"

using namespace std;

Nodo::Nodo(){}

Nodo::Nodo(int dato){
    this->dato = dato;
}

void Nodo::setDato(int dato){
    this->dato=dato;
}

void Nodo::setNext(Nodo* next){
    this->next = next;
}

int Nodo::getDato(){
    return this->dato;
}

Nodo* Nodo::getNext(){
    return this->next;
}