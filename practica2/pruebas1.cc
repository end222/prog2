#include <iostream>
#include "calculos.h"

using namespace std;

int main(){
    int n;
    int b=10;
    cout << "Introducir un número para hacer pruebas: " << flush;
    cin >> n;
    cout << endl;
    cout << "+---------------------------------------------------+"<<endl;
    cout << "| Número de cifras:                                "<< numCifras(n,b)<<"|"<< endl;
    cout << "| Cifra más significativa                          "<< cifraMasSignificativa(n,b)<<"|"<< endl;
    cout << "| Cifra mayor                                      "<< cifraMayor(n,b)<< "|" << endl;
    cout << "+---------------------------------------------------+"<<endl;
    return 0;
}
    
