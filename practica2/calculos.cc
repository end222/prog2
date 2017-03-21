/*
 *  Devuelve el número de cifras del número natural [n] cuando se expresa 
 *  en base [b], siendo [b] un entero comprendido entre 2 y 10
 */
int numCifras (const int n, const int b = 10){
    if(n<b) return 1;
    else return 1+numCifras(n/b);
}
 
/*
 *  Devuelve el valor de la cifra del número natural [n] situada en la 
 *  posición [i], empezando a contar por su cifra menos significativa, 
 *  cuando [n] se expresa en base [b], siendo [b] un entero  comprendido
 *  entre 2  y 10	
 */
int cifra (const int n, const int i, const int b = 10){
    if(i==1) return n%b;
    else return cifra(n/b, i-1, b);
}
	
/*
 *  Devuelve el valor de la mayor de las cifras del número natural [n] 
 *  cuando se expresa en base [b], siendo [b] un entero comprendido entre
 *  2 y 10
 */
int cifraMayor(int mayor, const int n, const int b){
    if(n==0) return mayor;
    else {
	if(n%b > mayor) mayor = n%b;
	return cifraMayor(mayor, n/10, b);
    }
}
			
int cifraMayor (const int n, const int b = 10){
    int mayor = 0;
    return cifraMayor(mayor, n, b);
}

/*
 *  Devuelve el valor de la cifra más significativa del número natural [n] 
 *  cuando se expresa en base {b], siendo [b] un entero comprendido entre
 *  2 y 10
 */
int cifraMasSignificativa (const int n, const int b = 10){
    if(n<b) return n;
    else return cifraMasSignificativa(n/b);
}

/*
 *  Devuelve la suma de las cifras del número natural [n] cuando [n] se 
 *  expresa en base [b], siendo [b] un entero comprendido entre 2 y 10
 */
int sumaCifras (const int n, const int b = 10){
    if(n<10) return n;
    else return n%b + sumaCifras(n/b,b);
}
