/*
 * Programador:
 * Fecha de la última revisión:
 */
 
/*
 * Fichero funcionesPilas.h que contiene un conjunto de funciones para
 * trabajar con pilas genéricas de tipo Pila <T> que almacenan una 
 * colección de datos de tipo <T> gestionados según una política LIFO
 */
 
#ifndef FUNCIONES_GENERICAS_H

#define FUNCIONES_GENERICAS_H

#include <iostream>
#include <iomanip>

// Tipo genérico Pila y operaciones básicas para el trabajo con pilas de datos
#include "../genericos/pila.h"

using namespace std;

/*
 * Notación empleada en las especificaciones:
 *   P = []  La pila P está vacía, es decir, almacena 0 datos
 *   P = [D_1, D_2, ..., D_K] la pila P almacena K datos. El más antiguo
 *      es el dato D_1, el segundo más antiguo el dato D_2, etc., etc.,
 *      y el más reciente es el dato D_K
 */

/*
 * Pre: P = [D_1, D_2, ..., D_K] AND K >= 0
 * Post: P = [_1, D_2, ..., D_K] AND numDatos(P) = K
 */
template <typename T>
int numDatos (Pila <T>& P) {
    T aux;
    int numero;
    if(estaVacia(P)) return 0;
    else{
	aux = cima(P);
	desapilar(P);
	numero = numDatos(P);
	apilar(P,aux);
	return 1 + numero;
    }
}

/*
 * Pre: P = [D_1, D_2, ..., D_K] y anchura >= 1
 * Post: P = [D_1, D_2, ..., D_K] y presenta por pantalla un listado de  
 *       los datos apilados en [P] comenzando por la cima, D_K, y acabando  
 *       por el del fondo de la pila, D_1. Cada dato lo escribe en una línea, 
 *       empleando anchura caracteres y alineado a la derecha. Cada dato es 
 *       precedido por el carácter '|' y es seguido por los caracteres ' ' y 
 *       '|', tal como se  ilustra a continuación. Tras el último dato se  
 *       presenta una linea de la forma "+--...--+", seguida por una línea 
 *       en blanco:
 * 
 *       |     D_K |
 *       |     ... |
 *       |     D_2 |
 *       |     D_1 |
 *       +---------+
 */
template <typename T>
void mostrar (Pila <T>& P, const int anchura = 3) {
    T aux;
    if(estaVacia(P)){
	cout << "+" << setfill('-') << setw(anchura+1) << "+" << endl;
    }
    else {
	aux = cima(P);
	cout << "|" << setfill(' ') << setw(anchura) << aux << "|" << endl;
	desapilar(P);
	mostrar(P,anchura);
	apilar(P,aux);
    }
}

/*
 * Pre: P = [D_1, D_2, ..., D_K] y anchura >= 1 
 * Post: P = [D_1, D_2, ..., D_K] y presenta por pantalla un listado de los 
 *       datos apilados en [P] comenzando por el del fondo de la pila, D_1,
 *       y acabando por el de la cima de la pila, D_K. Cada dato lo escribe 
 *       en una línea, empleando anchura caracteres y alineado a la derecha. 
 *       Cada dato es precedido por el carácter '|' y es seguido por los 
 *       caracteres ' ' y '|', tal como se  ilustra a continuación. Antes 
 *       del primer dato se presenta una linea de la forma "+--...--+":
 * 
 *       +---------+
 *       |     D_1 |
 *       |     D_2 |
 *       |     ... |
 *       |     D_K |
 */
template <typename T>
void mostrarInvertida (Pila <T>& P, const int anchura = 3) {
    T aux;
    if(estaVacia(P)){
	cout << "+" << setfill('-') << setw(anchura+1) << "+" << endl;
    }
    else {
	aux = cima(P);
	desapilar(P);
	mostrarInvertida(P,anchura);
	cout << "|" << setfill(' ') << setw(anchura) << aux << "|" << endl;
	apilar(P,aux);
    }
}

/*
 * Pre: P = [D_1, D_2, ..., D_K] AND K >= 0
 * Post: P = [D_2, ..., D_K]
 */
template <typename T>
void eliminarFondo (Pila <T>& P) {
    T aux;
    if(numDatos(P)!=1){
	aux = cima(P);
	desapilar(P);
	eliminarFondo(P);
	apilar(P,aux);
    }
    else desapilar(P);
}

/*
 * Pre: P = [D_K, ..., D_(i+1), D_i, D_(i-1), ..., D_1] AND K >= 0
 * Post: P = [D_K, ..., D_(i+1), D_(i-1), ..., D_1] 
 */
template <typename T>
void eliminar (Pila <T>& P, const int i) {
    T aux;
    if(i!=1){
	aux = cima(P);
	desapilar(P);
	eliminar(P,i-1);
    	apilar(P,aux);
    }
    else desapilar(P);
}

/*
 * Pre: P = [D_1, D_2, ..., D_K] AND K >= 0
 * Post: P = [nuevo, D_1, D_2, ..., D_K]
 */
template <typename T>
void insertarEnFondo (Pila <T>& P, const T nuevo) {
    T aux;
    if(!estaVacia(P)){
	aux = cima(P);
	desapilar(P);
	insertarEnFondo(P, nuevo);
        apilar(P,aux);
    }
    else apilar(P,nuevo);
}

#endif
