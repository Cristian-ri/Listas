#include "ListaEnlazada.hpp"

ListaEnlazada::ListaEnlazada(){
	head = 0;
}

void ListaEnlazada::pushFront(int key){
	Nodo *nuevonodo = new Nodo(key);
	nuevonodo->next = head;
}

void ListaEnlazada::printlista(){
	Nodo *iterador;
	iterador->next = head;
	
	while(iterador->next != NULL){
		cout<<iterador->key<<endl;
		iterador = iterador->next;
	}
}
