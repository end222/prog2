/*
 * Programadores: J. Martínez y J.Ezpeleta
 * Fecha de la última revisión: 21-12-2016
 */

/*
 * Programa pruebas02.cc de prueba del trabajo con pilas 
 * de datos genéricos y del comportamiento de las funciones
 * genéricas definidas en el fichero "funcionesPilas.h"
 */

#include <iostream>
#include <cstring>

using namespace std;

/*
 * Ofrece el tipo genérico Pila <T> que permite declarar diversas   
 * pilas de datos y las funciones básicas para trabajar con dichas 
 * pilas de  datos (apilar, desapilar, cima, etc.)
 */
#include "../genericos/pila.h"

/*
 * Funciones genéricas, diseñadas sin bucles ni inmersión, que 
 * trabajan con pilas que almacenan datos genéricos
 */
#include "funcionesPilas.h"

/*
 * Pre: ---
 * Post: Ilustra el trabajo con pilas de datos de tipo 'int'
 */
void pruebasPilaEnteros () {
    // Define una pila de datos, P, que almacena datos de tipo 'int'
    Pila <int> P;
    // Vacía la pila P
    vaciar(P);
    // PRIMOS almacena los números primeros menores que 100
    const int PRIMOS[] = { 
        2,  3,  5,  7, 11, 13, 17, 19, 23, 29,
        31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
        73, 79, 83, 89, 97 
    };
    // Apila en P los NUM primeros números primos
    const int NUM = 15;
    for (int i = 1; i <= NUM; ++i) {
        apilar(P, PRIMOS[i-1]);
    }
    // Muestra por pantalla el contenido de P
    cout << "Se han apilado los " << numDatos(P) 
         << " primeros numeros primos:" << endl << endl; 
    mostrar(P);
    // Muestra por pantalla los datos de P en orden inverso
    cout << "Y esta es la pila invertida:" 
        << endl << endl;
    mostrarInvertida(P);
    // Elimina un dato de la pila P y muestra su contenido
    cout << endl << "Se ha eliminado su sexto dato:" << endl << endl;
    eliminar(P, 6); mostrar(P);
    // Elimina otro dato de la pila P y muestra su contenido
    cout << "Se ha eliminado su tercer dato:" << endl << endl;
    eliminar(P, 3); mostrar(P);
    // Elimina el dato del fondo de la pila P y muestra su contenido
    cout << "Se ha eliminado el dato del fondo de la pila:"
         << endl << endl;
    eliminarFondo(P);
    mostrar(P);
    // Inserta los datos 123001 y 9229 en el fondo de la pila P y  
    // muestra su contenido
    insertarEnFondo(P, 123001); insertarEnFondo(P, 9229);
    cout << "Se han insertado 123001 y 9229 en el fondo de la pila:"
         << endl << endl;
    mostrar(P, 6);
}

/*
 * Pre: ---
 * Post: Ilustra el trabajo con pilas de datos de tipo 'char'
 */
void pruebasPilaCaracteres () {
    // Define una pila de datos, P, que almacena datos de tipo 'int' y la
    // inicializa sin datos
    Pila <char> P;
    // Vacía la pila P
    vaciar(P);
    // PRIMOS almacena los números primeros menores que 100
    const char texto[] = "Me divierte Programacion 2";
    // Apila en P los NUM primeros números primos
    int numCar = strlen(texto);
    for (int i = 0; i < numCar; ++i) {
        apilar(P, texto[i]);
    }
    // Muestra por pantalla el contenido de P
    cout << "Se han apilado los " << numDatos(P) 
         << " caracteres de la frase """ << texto << """ :" 
         << endl << endl; 
    mostrar(P);
    // Muestra por pantalla los datos de P en orden inverso
    cout << "Y esta es la pila invertida:" << endl << endl;
    mostrarInvertida(P);
    // Elimina un dato de la pila P y muestra su contenido
    cout << endl << "Se ha eliminado su sexto caracters:" 
         << endl << endl;
    eliminar(P, 6); mostrar(P);
    // Elimina otro dato de la pila P y muestra su contenido
    cout << "Se ha eliminado su tercer caracter:" << endl << endl;
    eliminar(P, 3); mostrar(P);
    // Elimina el dato del fondo de la pila P y muestra su contenido
    cout << "Se ha eliminado el caracter del fondo de la pila:"
         << endl << endl;
    eliminarFondo(P);
    mostrar(P);
    // Inserta los datos '$' y '#' en el fondo de la pila P y  
    // muestra su contenido
    insertarEnFondo(P, '$'); insertarEnFondo(P, '#');
    cout << "Se han insertado '$' y '#' en el fondo de la pila:"
         << endl << endl;
    mostrar(P);
}

/*
 * Pre: ---
 * Post: Ilustra el trabajo con pilas de datos de tipo 'string'
 */
void pruebasPilaString () {
    // Define una pila de datos, P, que almacena datos de tipo 'string'
    Pila <string> P;
    // Vacía la pila P
    vaciar(P);
    // MESES almacena los nombres de los meses del año, comenzando con
    // Diciembre y acabando con Enero
    const string MESES[] = { 
        "Diciembre", "Noviembre", "Octubre","Septiembre", "Agosto", "Julio", 
        "Junio", "Mayo", "Abril", "Marzo", "Febrero", "Enero"
    };
    // Apila en P los nombres de los meses del año
    const int NUM_MESES = 12;
    for (int i = 1; i <= NUM_MESES; ++i) {
        apilar(P, MESES[i-1]);
    }
    // Muestra por pantalla el contenido de P
    cout << "Se han apilado los " << numDatos(P) 
	 << " meses del anyo:" << endl << endl; 
	mostrar(P, 10);
    // Muestra por pantalla los datos de P en orden inverso
    cout << "Aqui se presenta un listado con los meses invertidos:" 
         << endl << endl;
    mostrarInvertida(P, 10);
    // Elimina un mes de la pila P y muestra su contenido
    cout << endl << "Se ha eliminado el octavo mes:" 
         << endl << endl;
    eliminar(P, 8); mostrar(P,10);
    // Elimina otro dato de la pila P y muestra su contenido
    cout << "Se ha eliminado el cuarto mes:" << endl << endl;
    eliminar(P, 4); mostrar(P, 10);
    // Elimina el dato del fondo de la pila P y muestra su contenido
    cout << "Se han eliminado los dos meses del fondo de la pila:"
         << endl << endl;
    eliminarFondo(P); eliminarFondo(P);
    mostrar(P, 10);
    // Inserta los meses November y December en el fondo de la pila P y  
    // muestra su contenido
    string mes = "November";
    insertarEnFondo(P, mes);  
    mes = "December"; 
    insertarEnFondo(P, mes);
    cout << "Se han insertado November y December en el fondo de la pila:"
         << endl << endl;
    mostrar(P, 10);
}

/*
 * Programa de prueba que ilustra el trabajo con diversas clases de pilas de
 * datos, concretamente con una pila de enteros, con una pila de caracteres
 * y con una pila de datos de tipo string
 */
int main () {
    pruebasPilaEnteros();       // pruebas con una pila de datos de tipo int
    pruebasPilaCaracteres();    // pruebas con una pila de datos de tipo char
    pruebasPilaString();        // pruebas con una pila de datos de tipo string
    return 0;
}
