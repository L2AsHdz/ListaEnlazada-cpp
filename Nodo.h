class Nodo{
    private:
        int dato;
        Nodo* next;
    public:
        Nodo();
        Nodo(int dato);
        void setDato(int dato);
        void setNext(Nodo* next);
        Nodo* getNext();
        int getDato();
};