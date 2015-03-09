#include <iostream>

using namespace std;
int a,b,c; // Declaracion de variables

int main()
{
    cout << "Dame los 3 numeros" << endl;
    cin >> a >> b >> c; // toma los tres numeros introducidos por teclado

    if(a>b){
        if(b>c)
            cout << a << " " << b << " " << c;
        else
            {cout << a << " " << c << " " << b;}}
    else
        if(a>c)
            {cout << b << " " << a << " " << c;}
        else if(b>c){
            cout << b << " " << c << " " << a;}
        else
            {cout << c << " " << b << " " << a;}
 }
