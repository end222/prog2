
/*
 * Programador: Pablo Orduna
 * Fecha de la �ltima revisi�n:
 */

/*
 *  Fichero de interfaz calculos.h del m�dulo de biblioteca calculos
 */

#ifndef CALCULOS_H 

#define CALCULOS_H

/*
 * Observaci�n: Las especificaciones informales de cada una de las 
 * funciones han de ser sustituidas por especificaciones formales
 */

/*
 *  Devuelve el n�mero de cifras del n�mero natural [n] cuando se expresa 
 *  en base [b], siendo [b] un entero comprendido entre 2 y 10
 */
int numCifras (const int n, const int b = 10);
 
/*
 *  Devuelve el valor de la cifra del n�mero natural [n] situada en la 
 *  posici�n [i], empezando a contar por su cifra menos significativa, 
 *  cuando [n] se expresa en base [b], siendo [b] un entero  comprendido
 *  entre 2  y 10	
 */
int cifra (const int n, const int i, const int b = 10);
	
/*
 *  Devuelve el valor de la mayor de las cifras del n�mero natural [n] 
 *  cuando se expresa en base [b], siendo [b] un entero comprendido entre
 *  2 y 10
 */			
 int cifraMayor (const int n, const int b = 10);

/*
 *  Devuelve el valor de la cifra m�s significativa del n�mero natural [n] 
 *  cuando se expresa en base {b], siendo [b] un entero comprendido entre
 *  2 y 10
 */
int cifraMasSignificativa (const int n, const int b = 10);

/*
 *  Devuelve la suma de las cifras del n�mero natural [n] cuando [n] se 
 *  expresa en base [b], siendo [b] un entero comprendido entre 2 y 10
 */
int sumaCifras (const int n, const int b = 10);

#endif
