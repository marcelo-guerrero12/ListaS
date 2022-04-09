#pragma once

#include "node.h"

template <class T>

class Lista{
    private:
      Node<T>* inicio;
      Node<T>* fin;
      unsigned long cantidad;
    public:
      Lista(){
          inicio=fin=nullptr;//lista vacia
          cantidad=0;
      }
      void insertar_inicio(T v){
          Node<T>* nuevo=new Node<T>(v);
           if(cantidad==0)
              inicio=fin=nuevo;               
           else{
               nuevo->siguiente=inicio;
                inicio->anterior=nuevo;
           }             
          inicio=nuevo;
          ++cantidad;              
      }

     void anteponer(T v){
          Node<T>* nuevo=new Node<T>(v);
           if(cantidad==0)
              inicio=fin=nuevo;               
           else{
               nuevo->siguiente=inicio;
                inicio->anterior=nuevo;
           }             
          inicio=nuevo;
          ++cantidad;              
      }
      void insertar_final(T v){
          Node<T>* nuevo=new Node<T>(v);
          if(cantidad==0)
            inicio=fin=nuevo;
          else{
              fin->siguiente=nuevo;
               nuevo->anterior=fin;
              fin=nuevo;
          }          
          ++cantidad;
      }
          void insertarPos(T v, long pos){
          if (pos<=0) 
              anteponer(v);
          else if (pos>=cantidad)
              insertar_final(v);
          else{
              Node<T>* aux = inicio;
              for(int i = 0; i < pos-1; ++i)
                aux = aux->siguiente;
              Node<T>* nuevo = new Node<T>(v);
               nuevo->siguiente=aux->siguiente;
               aux->siguiente=nuevo;
               nuevo->anterior=aux;
               nuevo->siguiente->anterior=nuevo;
               ++cantidad;
          }
        }

    void eliminar_primero(Node<T>*& lista, T n){
	if (lista != NULL)
	{
		Node<T>* aux_borrar;
		Node<T>* aux_anterior = NULL;

		aux_borrar = lista;

      if (aux_anterior == NULL)
	{
		lista = lista->siguiente;
		delete aux_borrar;
	}
	}
}
void eliminar(Node<T>*& lista, T n)
{
	if (lista != NULL)
	{
		Node<T>* aux_borrar;
		Node<T>* aux_anterior = NULL;

		aux_borrar = lista;

		while ((aux_borrar != NULL) && (aux_borrar->dato != n))
		{
			aux_anterior = aux_borrar;
			aux_borrar = aux_borrar->siguiente;
		}
		if (aux_borrar == NULL)
		{
			cout << "El elemento no a sido encontraod";
		}
		else if (aux_anterior == NULL)
		{
			lista = lista->siguiente;
			delete aux_borrar;
		}
		else
		{
			aux_anterior->siguiente = aux_borrar->siguiente;
			delete aux_borrar;
		}
	}
	
}


void recuperar(long pos){
     Node<T>* aux=inicio;

     if(pos>=1 || pos<=cantidad){
         for(long i=1;i<pos;++i){
            aux=aux->siguiente;
         }
        cout<<"Valor:"<< aux->valor;

     }else{
         
         cout<<"Posicion inexistente";
     }
}

void invertir(){

    Node<T>* prev=nullptr;
    Node<T>* sig=nullptr;
    Node<T>* aux=inicio;

    while(aux!=nullptr){
        sig=aux->siguiente;
        aux->siguiente=prev;
        prev=aux;
        aux=sig;
        inicio=prev;
    }
}

 void imprimir(){
        Node<T>* aux=inicio;
        while(aux!=nullptr){
          cout<<aux->valor<<"-->";
          aux=aux->siguiente;
        }
        cout<<"nullptr"<<endl;
      }

};
