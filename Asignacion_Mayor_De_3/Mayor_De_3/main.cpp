#include <iostream>

using namespace std;
int nota1,nota2,nota3; // Declaracion de variables

int main()
{
    cout << "Introduzca las  notas: " << endl;
    cout << " " << endl;
    cin >> nota1 >> nota2 >> nota3;

    if(nota1>nota2){
        if(nota1>nota3)
            {cout << "La mayor nota es, "<< nota1 << endl;}
    }
    else{
        if(nota2>nota3)
            {cout << "La mayor nota es, "<< nota2 << endl;}
        else
             {cout << "La mayor nota es, "<< nota3 << endl;}
    } // Fin del Else

 } // fin del Main
