#include <iostream>

using namespace std;

int main()
{
    int a,b; // declaracion de variables
    cout << "Introduzca dos números enteros: "<< endl; // Muestra mensaje en pantalla
    cout << " " << endl;
    cin >> a >> b; // Toma los datos introducidos por teclado
    cout << " " << endl;
    if(a>b)
        cout << "El mayor es, " << a << endl;
    else
       cout << "El mayor es, " << b<< endl;

}
