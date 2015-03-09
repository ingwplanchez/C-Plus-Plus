#include <iostream>

using namespace std;

int brochas, rodillos,sellador; // productos

double Precio_b,Precio_r,Precio_s; // Credito
double desc_bcred, desc_rcred,desc_scred;

double Precio_bcont,Precio_rcont,Precio_scont; // Contado
double desc_bcont, desc_rcont,desc_scont;


int main()
{
    cout << " " << endl;
    cout << "   /////////////////////////////////////////////////"<< endl;
    cout << "   /////////////////////////////////////////////////"<< endl;
    cout << "   //                                             // " << endl;
    cout << "   //   PRODUCTOS              PRECIO UNITARIO    //" << endl;
    cout << "   //                                             // " << endl;
    cout << "   //    Brochas                      $5          //"<< endl;
    cout << "   //                                             // " << endl;
    cout << "   //    Rodillos                     $10         //" << endl;
    cout << "   //                                             // " << endl;
    cout << "   //    Sellador                     $12         //" << endl;
    cout << "   //                                             // " << endl;
    cout << "   /////////////////////////////////////////////////"<< endl;
    cout << "   /////////////////////////////////////////////////"<< endl;
    cout << " " << endl;
    cout << " " << endl;

    cout << "   Introduzca la cantidad de Brochas que desea: ";
    //cout << " " << endl;
    cin >> brochas;
    cout << " " << endl;
    cout << "   Introduzca la cantidad de Rodillos que desea: ";
    cin >> rodillos;
    cout << " " << endl;
    cout << "   Introduzca la cantidad de Selladores que desea: ";
    cin >> sellador;
    cout << " " << endl;

    // PRECIOS TOTALES (credito)

    Precio_b = (5*brochas); // Precio de las brochas
    desc_bcred = (Precio_b * 20)/100; // Descuento de las brochas 20%
    Precio_b = Precio_b - desc_bcred ; // Precio total de las brochas

    Precio_r= (10*rodillos);
    desc_rcred = (Precio_r * 15)/100; // Descuento de las brochas 15%
    Precio_r = Precio_r - desc_rcred ; // Precio total de los rodillos

    Precio_s = 12*sellador;

    // PRECIOS TOTALES (contado)

    desc_bcont = (7*Precio_b)/100;
    Precio_bcont = Precio_b - desc_bcont;

    desc_rcont = (7*Precio_r)/100;
    Precio_rcont = Precio_r - desc_rcont;

    desc_scont = (7*Precio_s)/100;
    Precio_scont = Precio_s - desc_scont;

    cout << " " << endl;
    cout << " " << endl;

    cout << "  PRODUCTOS      CANTIDAD      PRECIO UNITARIO       CONTADO     CREDITO  "<< endl;
    cout << "  " << endl;
    cout << "   Brochas "<<"          "<<brochas<<"              "<<"$5"<<"                 "<<Precio_bcont<<"          "<<Precio_b<< endl;;
    cout << "  " << endl;
    cout << "   Rodillos "<<"         "<<rodillos<<"             "<<"$10"<<"                 "<<Precio_rcont<<"          "<<Precio_r<< endl;;
    cout << " " << endl;
    cout << "   Selladores "<<"       "<<sellador<<"             "<<"$12"<<"                 "<<Precio_scont<<"          "<<Precio_s<< endl;;
    cout << " " << endl;
    cout << " " << endl;

}
