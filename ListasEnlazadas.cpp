#include <iostream>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *next;
};

int main()
{
    Nodo *lista = NULL;
    int dato;

    return 0;
}

void menu()
{
    int opcion;

    do
    {
    cout<<"\t.:Menu de Listas Enlazadas:.\n";
    cout<<"1.Insertar elementos a la lista\n";
    cout<<"2.Mostar los elementos de la lista\n";
    cout<<"3.Buscar un elemento de la lista\n";
    cout<<"4.Eliminar un elemento de la lista\n";
    cout<<"5.Salir\n";

    cout<<"Opcion: ";
    cin>>opcion;
    switch (opcion)
    {
    case 1:
        
        break;
    
    default:
        break;
    }


    } while (opcion !=5);
    

}

void Insertar(Nodo *&lista, int n)
{
    Nodo *nuevo_nodo= new Nodo();
    nuevo_nodo->dato=n;

    Nodo *aux1 = lista;
    Nodo *aux2;

    while ((aux1 != NULL) && (aux1->dato < n))
    {
        aux2 = aux1;
        aux1 = aux1->next;
    }
    
    if(lista == aux1)
    {
        lista = nuevo_nodo;
    }
    else
    {
        aux2->next=nuevo_nodo;
    }

    nuevo_nodo->next= aux1;

}

void Mostrar(Nodo *lista)
{
    Nodo *actual = new Nodo();

    actual = lista;
    while (actual != NULL)
    {
        cout<<actual->dato<<" -> ";
        actual = actual->next;
    }
    
}

void Buscar(Nodo *lista, int n)
{
    bool found = false;

    Nodo *actual = new Nodo();
    actual = lista;

    while ((actual != NULL) && (actual->dato <= n))
    {
        if (actual->dato==n)
        {
            found = true;
        }
        actual= actual->next;
        
    }

    if (found == true)
    {
        cout<<"Elemento "<<n<<"ha sido encontrado\n";
    }
    else
    {
        cout<<"Elemento "<<n<<"no ha sido encontrado\n";
    }
    
    
}