
/*
 * Programador: Pablo Orduna
 * Fecha de la última revisión:
 */

/*
 *  Fichero de interfaz calculos.h del módulo de biblioteca calculos
 */

#ifndef CALCULOS_H 

#define CALCULOS_H

/*
 * Observación: Las especificaciones informales de cada una de las 
 * funciones han de ser sustituidas por especificaciones formales
 */

/*
 *  Devuelve el número de cifras del número natural [n] cuando se expresa 
 *  en base [b], siendo [b] un entero comprendido entre 2 y 10
 */
int numCifras (const int n, const int b = 10);
 
/*
 *  Devuelve el valor de la cifra del número natural [n] situada en la 
 *  posición [i], empezando a contar por su cifra menos significativa, 
 *  cuando [n] se expresa en base [b], siendo [b] un entero  comprendido
 *  entre 2  y 10	
 */
int cifra (const int n, const int i, const int b = 10);
	
/*
 *  Devuelve el valor de la mayor de las cifras del número natural [n] 
 *  cuando se expresa en base [b], siendo [b] un entero comprendido entre
 *  2 y 10
 */			
 int cifraMayor (const int n, const int b = 10);

/*
 *  Devuelve el valor de la cifra más significativa del número natural [n] 
 *  cuando se expresa en base {b], siendo [b] un entero comprendido entre
 *  2 y 10
 */
int cifraMasSignificativa (const int n, const int b = 10);

/*
 *  Devuelve la suma de las cifras del número natural [n] cuando [n] se 
 *  expresa en base [b], siendo [b] un entero comprendido entre 2 y 10
 */
int sumaCifras (const int n, const int b = 10);

#endif
