struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertar(Nodo *lista, int dato);

void eliminar(Nodo *lista, int index);

int obtener(Nodo *lista, int index);

void mostrarLista(Nodo *lista);